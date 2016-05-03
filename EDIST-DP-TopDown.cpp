#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>

using namespace std;

int memo[3000][3000];

char str1[3000];
char str2[3000];

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

int MinOp(char str1[], char str2[], int i ,int j)
{
    if (i == 0)
        memo[0][j-1] = j;
    if (j == 0)
        memo[i-1][0] = i;

    if (memo[i-1][j-1] > 0)
        return memo[i-1][j-1];

    if (str1[i-1] == str2[j-1])
        memo[i-1][j-1] = 0 + MinOp(str1, str2, i-1, j-1);
    else if (str1[i-1] != str2[j-1])
        memo[i-1][j-1] = 1 + min3(
                            MinOp(str1, str2, i, j-1),
                            MinOp(str1, str2, i-1, j),
                            MinOp(str1, str2, i-1, j-1)
                        );
    return memo[i-1][j-1];
}

int main()
{
    int case;

    memset(memo, 0, sizeof(memo));

    cin >> case;
    for(int i=0; i<n; i++)
    {
        scanf("%s", &str1);
        scanf("%s", &str2);


        cout << MinOp(str1, str2, strlen(str1), strlen(str2));
    }
}

