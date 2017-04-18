#include <iostream>

using namespace std;

int main()
{
    int S[100], arr[1000][2];
    int i=0, j=0, m, n;

    cin >> m;
    for(int j=0; j<m; j++)
        cin >> S[j];

    cin >> n;

    while(S[i] > n)
        i++;
    while(n != 0)
    {
        arr[j][0] = S[i];
        arr[j][1] = n / S[i];
        i++;
        while (S[i] > n)
            i++;
    }

    int k = 0;
    while (arr[k][0] != 0)
    {
        cout << arr[k][0] << " " << arr[k][1] << endl;
        k++;
    }

}

