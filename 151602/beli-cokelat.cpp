#include <iostream>
#include <algorithm>

using namespace std;

struct c
{
    long harga;
    long bebeksuka;
};

bool acompare(c a, c b)
{
    return a.harga < b.harga;
}

int main()
{
    long long N, D, jumlahBebek, i, totalHarga, jumlahBeli;
    c coklat[100001];

    cin >> N >> D;

    for (int i=0; i<N; i++)
    {
        cin >> coklat[i].harga >> coklat[i].bebeksuka;
    }

    sort(coklat, coklat+N, acompare);

    jumlahBebek = i = 0;

    while ((D >= 0) && (i < N))
    {
        totalHarga = coklat[i].harga * coklat[i].bebeksuka;
        if (totalHarga <= D)
        {
            jumlahBebek += coklat[i].bebeksuka;
            D -= totalHarga;
        }
        else
        {
            jumlahBeli = D/coklat[i].harga;
            totalHarga = jumlahBeli * coklat[i].harga;
            D -= totalHarga;
            jumlahBebek += jumlahBeli;
        }
        i++;
    }

    cout << jumlahBebek << endl;
}
