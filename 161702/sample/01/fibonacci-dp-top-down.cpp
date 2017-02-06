#include <iostream>
#include <string.h>

using namespace std;

long long fib_memo[1000];

long long fibonacci(int n)
{
    if ((n == 1) || (n == 2))
        return fib_memo[n];

    if (fib_memo[n] != 0)
        return fib_memo[n];
    else
    {
        fib_memo[n] = fibonacci(n-1) + fibonacci(n-2);
        return fib_memo[n];
    }
}

int main()
{
    memset(fib_memo, 0, sizeof(fib_memo));

    fib_memo[1] = 1;
    fib_memo[2] = 1;

    int n;
    cin >> n;
    cout << fibonacci(n);
}
