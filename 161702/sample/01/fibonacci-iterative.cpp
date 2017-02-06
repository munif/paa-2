#include <iostream>

using namespace std;

long long fibonacci(int n)
{
    long long a = 1;
    long long b = 1;
    long long c;
    for (int i=3; i<=n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}
