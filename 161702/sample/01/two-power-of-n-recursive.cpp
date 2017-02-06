#include <iostream>

using namespace std;

long long power_of_n(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    else
        return power_of_n(n-1) + power_of_n(n-1);
}


int main()
{
    int n;
    cin >> n;
    cout << power_of_n(n);
}
