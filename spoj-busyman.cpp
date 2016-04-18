#include <iostream>
#include <algorithm>

using namespace std;

struct a
{
    int start;
    int finish;
};

bool acompare (a lhs, a rhs)
{
    if (lhs.finish < rhs.finish)
        return true;
    if (lhs.finish == rhs.finish)
        return (lhs.start < rhs.start);
    return false;
}

a A[100000];

int main()
{
    int t, n;

    cin >> t;
    for (int i=0; i<t; i++)
    {
        cin >> n;

        for (int j=0; j<n; j++)
        {
            cin >> A[j].start >> A[j].finish;
        }

        sort(A, A+n, acompare);

        int count = 1;
        int k = 0;
        for (int m = 1; m < n; m++)
        {
            if (A[m].start >= A[k].finish)
            {
                count++;
                k = m;
            }
        }
        cout << count << endl;
    }
}
