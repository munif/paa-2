#include <iostream>
#include <string.h>

using namespace std;

int p[10001];
int r[10001];

int cut_rod(int n)
{
    r[0] = 0;
    for(int j=1; j<=n; j++)
    {
        int q=-100000;
        for(int i=1;i<=j; i++)
        {
            q=max(q,p[i]+r[j-i]);
        }
        r[j]=q;
    }
    return r[n];
}

int main()
{
    int n;
    memset(p, 0, sizeof(p));
    memset(r, 0, sizeof(r));

    p[0] = 0;
    p[1] = 1;
    p[2] = 5;
    p[3] = 8;
    p[4] = 9;
    p[5] = 10;
    p[6] = 17;
    p[7] = 17;
    p[8] = 20;
    p[9] = 24;
    p[10] = 30;

    cin >> n;
    cout << cut_rod(n);
}

