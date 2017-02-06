#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    // T: jumlah test case
    // N: jumlah kartu
    // im: indeks kartu musuh
    // ik: indeks kartu kita
    // musuhMenang: counter kemenangan musuh
    // kitaMenang: counter kemenangan kita
    // musuh[]: array kartu musuh
    // kitap[]: array kartu kita

    int T, N, im, ik, musuhMenang, kitaMenang;
    int musuh[100001], kita[100001];

    cin >> T;
    for (int t=0; t<T; t++)
    {
        cin >> N;
        for (int i=0; i<N; i++)
            cin >> musuh[i];
        for (int i=0; i<N; i++)
            cin >> kita[i];

        sort(musuh, musuh+N);
        sort(kita, kita+N);

        im = ik = 0;
        musuhMenang = kitaMenang = 0;

        while(ik < N)
        {
            if (musuh[im] >= kita[ik])
            {
                musuhMenang++;
                ik++;
            }
            else
            {
                kitaMenang++;
                ik++;
                im++;
            }
        }
        if (kitaMenang > musuhMenang)
            cout << "YA" << endl;
        else
            cout << "TIDAK" << endl;


    }
}
