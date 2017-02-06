#include <iostream>
#include <string.h>

using namespace std;

long long power_memo[1000];

long long power_of_n(int n)
{
    if (n == 0)
        return power_memo[n];
    if (n == 1)
        return power_memo[n];
    if (power_memo[n] != 0)
        return power_memo[n];
    else
    {
        power_memo[n] = power_of_n(n-1) + power_of_n(n-1);
        return power_memo[n];
    }
}


int main()
{
    int n;

    memset(power_memo, 0, sizeof(power_memo));

    power_memo[0] = 1;
    power_memo[1] = 2;

    cin >> n;
    cout << power_of_n(n);
}

