#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int jumlah;
    int penyihir[100001];

    cin >> jumlah;
    for (int i=0; i<jumlah; i++)
    {
        cin >> penyihir[i];
    }

    sort(penyihir, penyihir+jumlah);

    int pointer = jumlah - 1;
    int hasil = 0;

    while (jumlah > 0)
    {
        jumlah -= (penyihir[pointer]+1);
        pointer--;
        hasil++;
    }

    cout << hasil << endl;

    return 0;
}
