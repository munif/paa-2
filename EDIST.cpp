#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

int min3(int x, int y, int z)
{
    if (x < y)
    {
        if (x < z)
            return x;
        else
            return z;
    }
    else
    {
        if (y < z)
            return y;
        else
            return z;
    }
}

int MinOp(string str1 , string str2 , int i ,int j)
{
    if (i == 0)
        return j;
    if (j == 0)
        return i;
    if (str1[i-1] == str2[j-1])
        return 0 + MinOp(str1, str2, i-1, j-1);
    else if (str1[i-1] != str2[j-1])
        return 1 + min3(
                        MinOp(str1, str2, i, j-1),
                        MinOp(str1, str2, i-1, j),
                        MinOp(str1, str2, i-1, j-1)
                        );
}

int main()
{
    int n;
    string str1, str2;

    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> str1;
        cin >> str2;
        cout << MinOp(str1, str2, str1.length(), str2.length());
    }
}
