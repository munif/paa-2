#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    int s[] = {0, 1, 3, 0, 5, 3, 5,  6,  8,  8,  2, 12};
    int f[] = {0, 4, 5, 6, 7, 9, 9, 10, 11, 12, 14, 16};
    //int s[] = {0, 4, 5, 7, 8,  0,  4};
    //int f[] = {0, 5, 7, 9, 9, 10, 10};
    int n = 11;

    int result = 1;
    int A[n];
    memset(A, 0, sizeof(A));
    A[1] = 1;
    int k = 1;

    for(int m=2; m<=n; m++)
    {
        if (s[m] >= f[k])
        {
            k = m;
            A[++result] = m;
        }
    }

    cout << "Result = " << result << endl;
    for(int i=1; i<=result; i++)
        cout << A[i] << " ";

}
