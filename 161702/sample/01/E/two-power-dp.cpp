#include <iostream>

using namespace std;

long long power_memo[1001];

long long Calc(int A, int n)
{
    if (n == 0)
    {
        power_memo[n] = 1;
        return power_memo[n];
    }
    if (n == 1)
    {
        power_memo[n] = A;
        return power_memo[n];
    }

    if (power_memo[n] != 0)
        return power_memo[n];

    else
    {
        power_memo[n] = Calc(A, n-1) + Calc(A, n-1);
        return power_memo[n];
    }
}


int main()
{
    int A, n;
    cin >> A >> n;
    cout << Calc(A, n);

    cin.get();
}

