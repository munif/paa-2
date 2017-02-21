#include <iostream>
#include <string.h>

using namespace std;

int p[10001];
int r[10001];
int s[10001];

int cut_rod(int n)
{
    int q;
    r[0] = 0;
    for(int j=1;j<=n;j++)
    {
        q=-1000;
        for(int i=1;i<=j;i++)
        {
            if (q < p[i] + r[j-i])
            {
                q= p[i]+r[j-i];
                s[j] = i;
            }
        }
        r[j]=q;
    }
    return r[n];
}

void print_cut_rod_solution(int n)
{
    while (n > 0)
    {
        cout << s[n] << " ";
        n = n - s[n];
    }
}

int main()
{
    int n;
    cin >> n;
    memset(p, 0, sizeof(p));
    memset(r, 0, sizeof(r));
    memset(s, 0, sizeof(s));

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


    cout << cut_rod(n) << endl;
    cout << "p: " << endl;
    for(int i=1; i<=n; i++)
    {
        cout << p[i] << "\t";
    }
    cout << endl;
    cout << "r: " << endl;
    for(int i=1; i<=n; i++)
    {
        cout << r[i] << "\t";
    }
    cout << endl;
    cout << "s: " << endl;
    for(int i=1; i<=n; i++)
    {
        cout << s[i] << "\t";
    }

    cout << endl;
    cout << "Cut used: ";
    print_cut_rod_solution(n);
    cout << endl;
}

