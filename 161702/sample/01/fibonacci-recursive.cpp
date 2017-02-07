#include <iostream>
#include <string.h>

using namespace std;

// define the memo
long long fibo_memo[1000];

long long fibonacci(int n)
{
    if ((n == 1) || (n == 2))
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n-2);
}

int main()
{
    int n;

    memset(fibo_memo, 0, sizeof(fibo_memo));

    cin >> n;
    cout << fibonacci(n);
    cin.get();
}
