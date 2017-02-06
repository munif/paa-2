#include <iostream>

using namespace std;

long long power_of_n(int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return 2;
    else
    {
        long long result = 2;
        for (int i=2; i<=n; i++)
        {
            result = result * 2;
        }
        return result;
    }
}


int main()
{
    int n;
    cin >> n;
    cout << power_of_n(n);
}
