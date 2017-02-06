#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int N, B, bebek[20001];

    cin >> N >> B;
    for (int i=0; i<N; i++)
    {
        cin >> bebek[i];
    }
    sort(bebek, bebek+N);

    int hasil = 0;
    while (B > 0)
    {
        B = B - bebek[N-1];
        hasil++;
        N-=1;
    }
    cout << hasil << endl;
}
