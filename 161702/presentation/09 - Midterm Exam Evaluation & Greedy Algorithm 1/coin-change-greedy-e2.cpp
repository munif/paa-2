#include <iostream>

using namespace std;

int CoinChange(int S[], int i, int n)
{
    if (n == 0)
        return n;
    else if (n <= S[i])
        return n = n % S[i];
    else
        CoinChange(S, i-1, n);
}

int main()
{
    int S[100], m, n, i, out;

    cin >> m;
    for(int j=0; j<m; j++)
        cin >> S[j];

    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Hasilnya adalah: " << CoinChange(S, 0, n);

}
