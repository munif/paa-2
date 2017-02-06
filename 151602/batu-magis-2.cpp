#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long n, power;
    vector<long> penyihir;

    // 1. read n
    cin >> n;
    // 2. loop
    for (int i=0; i<n; i++)
    {
    // 3.   read penyihir[i]
        cin >> power;
        penyihir.push_back(power);
    }
    // 4. sort
    sort(penyihir.begin(), penyihir.end());

    // 5. inisialisasi jawabannya
    int count = 0;
    int nPenyihir = n;
    // 6. Loop untuk menghitung jumlah penyihir
    for (int i = n-1; i >= 0; i--)
    {
    // 7.   Update jumlah penyihir
        count++;
        nPenyihir--;

        nPenyihir -= penyihir[i];
        if (nPenyihir <= 0)
            break;
    }
    // 9. print count
    cout << count << endl;

    return 0;

}
