#include <iostream>
#include <string.h>

using namespace std;

// deklarasi memo
long long fibo_memo[1001];

long long Fibonacci(int n)
{
    if (n == 0)
    {   // memoization
        fibo_memo[n] = 0;
        return fibo_memo[n];
    }
    if (n == 1)
    {   // memoization
        fibo_memo[n] = 1;
        return fibo_memo[n];
    }

    // look up
    if (fibo_memo[n] != 0)
        return fibo_memo[n];
    else
    {   // memoization
        fibo_memo[n] = Fibonacci(n-1)+Fibonacci(n-2);
        return fibo_memo[n];
    }
}

int main()
{
    int n;
    cin >> n;

    // inisialisasi memo
    memset(fibo_memo, 0, sizeof(fibo_memo));

    cout << Fibonacci(n);
}
