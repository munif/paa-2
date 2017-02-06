#include <iostream>

using namespace std;

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
    cin >> n;
    cout << fibonacci(n);
    cin.get();
}
