#include <iostream>
#include <string.h>

using namespace std;

int power_mem[10001];

int two_power_bu(int n)
{
    if(n == 0)
    {
        power_mem[n] = 1;
        return power_mem[n];
    }
    else
    {
        power_mem[0] = 1;
        for(int i=1; i<=n; i++)
        {
            power_mem[i] = power_mem[i-1] * 2;
        }
        return power_mem[n];
    }
}

int two_power_bu2(int n)
{
    if (n == 0)
    {
        power_mem[n] = 1;
        return power_mem[n];
    }
    else if (power_mem[n] != 0)
        return power_mem[n];
    else
    {
        power_mem[n] = power_mem[n-1] * 2;
        return power_mem[n];
    }
}

int two_power_bu3(int n)
{
    for (int i=0; i<=n; i++)
    {
        if (i == 0)
            power_mem[i] = 1;
        else
            power_mem[i] = 2 * power_mem[i-1];
    }
    return power_mem[n];
}

int main()
{
    int n;

    cin >> n;

    memset(power_mem, 0, sizeof(power_mem));
    cout << two_power_bu(n) << endl;

    memset(power_mem, 0, sizeof(power_mem));
    cout << two_power_bu2(n) << endl;

    memset(power_mem, 0, sizeof(power_mem));
    cout << two_power_bu3(n) << endl;

}
