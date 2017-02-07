#include <iostream>

using namespace std;

int fibonacci(int n)
{
    int f1 = 0, f2 = 1, f = 1;
    while (n > 1)
    {
        f  = f1 + f2;
        f1 = f2;
        f2 = f;
        n  = n-1;
    }
    return f;
}


int main()
{
    int n;
    cin >> n;

    for (int i=1; i <= n; i++)
    {
        cout << fibonacci(i) << " ";
    }
}
