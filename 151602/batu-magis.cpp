#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    long long n, power;
    vector<int> penyihir;
    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> power;
        penyihir.push_back(power);
    }

    sort(penyihir.begin(), penyihir.end());

    int ans = 0;

    int jumlah = n;
    for(int i = n-1; i >= 0; i--)
    {
        ans++;
        jumlah--;
        jumlah-= penyihir[i];
        if (jumlah <= 0)
            break;

    }

    cout << ans << endl;
    return 0;
}
