#include <iostream>

using namespace std;


long long Calc(int A, int n)
{
    if (n == 0)
        return 1;
    if (n == 1)
        return A;
    else
        return Calc(A, n-1) + Calc(A, n-1);
}


int main()
{
    int A, n;
    cin >> A >> n;
    cout << Calc(A, n);

    cin.get();
}
