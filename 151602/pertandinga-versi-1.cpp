#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int T, jumlahKartu, m, n;
    int countMusuhMenang, countKitaMenang;

    int km[100001];
    int kk[100001];

    cin >> T;
    for (int t=0; t<T; t++)
    {
        cin >> jumlahKartu;
        m = n = jumlahKartu;

        for(int i=0; i<m; i++)
        {
            cin >> km[i];
        }
        for (int i=0; i<m; i++)
        {
            cin >> kk[i];
        }

        sort(km,km+m);
        sort(kk, kk+n);
        countMusuhMenang = countKitaMenang = 0;

        while (m > 0)
        {
            if (km[m-1] >= kk[n-1])
            {
                countMusuhMenang++;
                m--;
            }
            else
            {
                countKitaMenang++;
                m--;
                n--;
            }
        }
        if (countKitaMenang > countMusuhMenang)
        {
            cout << "YA" << endl;
        }
        else
        {
            cout << "TIDAK" << endl;
        }
    }
}
