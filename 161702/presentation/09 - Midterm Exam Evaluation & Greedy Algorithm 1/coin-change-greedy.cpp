#include <iostream>

using namespace std;

int main()
{
    int S[10], m, n, k=0, i=0;

    cin >> m;
    for(int j=0; j<m; j++)
        cin >> S[j];

    cin >> n;

    while(n > 0)
    {
        if (n-S[i] >= 0)
        {
            n = n - S[i];
            k++;
        }
        else if (i+1 <= m)
        {
            i++;
        }
        else
        {
            cout << "Uang sisa: " << n << endl;
            break;
        }
    }
    cout << "Number of banknotes: " << k << endl;
}

