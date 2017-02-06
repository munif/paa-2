#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;

int wt[2001];
int val[2001];
int n;
int W;
int memo[2001][2001];

int Knapsack(int W, int n)
{
    if(memo[W][n] != 0)
        return memo[W][n];
    if ((n == 0) || (W == 0))
        return 0;
    if (wt[n] > W)
        return Knapsack(W, n-1);
    else
    {
        memo[W][n] = max(val[n] + Knapsack(W-wt[n], n-1), Knapsack(W, n-1));
        return memo[W][n];
    }

}

int main()
{
    memset(memo, 0, sizeof(memo));
    scanf("%d %d", &W, &n);
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &wt[i], &val[i]);
    }
    printf("%d", Knapsack(W, n));
}
