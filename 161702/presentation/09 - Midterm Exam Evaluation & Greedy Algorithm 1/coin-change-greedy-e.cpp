#include <iostream>

using namespace std;

int main()
{
    int S[100], m, n, i, out;

    cin >> m;
    for(int j=0; j<m; j++)
        cin >> S[j];
    cout << "Masukkan nilai n: ";
    cin >> n;

    i = 0;
    out = 0;
    while(1)
    {
        if (n==0)
            break;
        else if (n%S[i] != 0)
            i++;
        else if (n%S[i] == 0)
            out++;
    }
    cout << "Jumlah pecahan yang dipakai: " << out;
}
