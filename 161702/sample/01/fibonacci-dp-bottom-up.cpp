#include <iostream>
#include <string.h>

using namespace std;

long long fib_memo[1000];

long long fibonacci(int n)
{
    if (n == 1 || n == 2)
        return fib_memo[n];
    else
    {
        for (int i=3; i<=n; i++)
        {
            fib_memo[i] = fib_memo[i-1] + fib_memo[i-2];
        }
        return fib_memo[n];
    }

}

int main()
{
    int n;

    memset(fib_memo, 0, sizeof(fib_memo));

    fib_memo[1] = 1;
    fib_memo[2] = 1;

    cin >> n;
    cout << fibonacci(n);
}

