#include <iostream>
#include <string.h>

using namespace std;

long long power_memo[1000];

long long two_power_of_n(int n)
{
    if (n == 0)
    {
        power_memo[n] = 1;
        return power_memo[n];
    }
    if (power_memo[n] != 0)
        return power_memo[n];
    else
    {
        power_memo[n] = two_power_of_n(n-1) + two_power_of_n(n-1);
        return power_memo[n];
    }

}


int main()
{
    int n;
    cin >> n;
    memset(power_memo, 0, sizeof(power_memo));

    cout << two_power_of_n(n);
}
