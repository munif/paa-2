#include <iostream>
#include <string.h>

using namespace std;


long long memo[10001];

long long two_power_bu1(int n)
{
    memo[0] = 1;
    for(int i=1; i<=n; i++)
    {
        if (memo[n] != 0)
            return memo[n];
        else
            memo[i] = memo[i-1]*2;
    }
    return memo[n];
}

long long two_power_bu2(int n)
{
    if (n == 0)
        return memo[n];
    if (n == 1)
        return memo[n];
    else
    {
        for (int i=2; i<=n; i++)
            memo[i] = memo[i-1] * 2;
        return memo[n];
    }
}

long long two_power_bu3(int n)
{
    for (int i=0; i<=n; i++)
    {
        if (i == 0)
            memo[i] = 1;
        else
            memo[i] = memo[i-1] * 2;
    }
    return memo[n];
}

int main()
{
    int n;

    cin >> n;
    memset(memo, 0, sizeof(memo));
    cout << two_power_bu1(n) << endl;

    memset(memo, 0, sizeof(memo));
    memo[0] = 1;
    memo[1] = 2;
    cout << two_power_bu2(n) << endl;

    memset(memo, 0, sizeof(memo));
    cout << two_power_bu3(n) << endl;


}
