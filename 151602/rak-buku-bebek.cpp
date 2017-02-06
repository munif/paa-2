#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int n, hi;
    long long B;
    vector<int> bebek;

    cin >> n >> B;
    for(int i=0; i<n; i++)
    {
        cin >> hi;
        bebek.push_back(hi);
    }

    sort(bebek.begin(), bebek.end());

    int countBebek = 0;
    for (int i=n-1; i>=0; i--)
    {
        countBebek++;
        B = B - bebek[i];
        if (B <= 0)
            break;
    }
    cout << countBebek << endl;
    return 0;
}
