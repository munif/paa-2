#include<stdio.h>

int m[101][101], s[101][101];

void print_optimal_parens(int i, int j)
{
    if (i == j)
        printf("A%d", i);
    else
    {
        printf("(");
        print_optimal_parens(i, s[i][j]);
        print_optimal_parens(s[i][j]+1, j);
        printf(")");
    }
}

int main()
{
	int x[1001], y[1001];
	int n;
	int i, j, k, q;
	printf("\nEnter Total Number of Matrices:\t");
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		printf("\nEnter Number of Rows of Matrix %d:\t", i);
		scanf("%d", &x[i]);
		printf("Enter Number of Columns of Matrix %d:\t", i);
        	scanf("%d", &y[i]);
		m[i][i]=0;
	}
	for(int l=2; l<=n; l++){
		for(i=1; i<=n-l+1; i++){
			j = i+l-1;
			m[i][j]=1000000001;
			for(k=i; k<=j-1; k++){
				q= m[i][k]+m[k+1][j]+x[i]*y[k]*y[j];
				if(q<m[i][j]){ //perbandingan untuk cari nilai minimumnya
					m[i][j] = q;
					s[i][j] = k;
				}
			}
		}
	}
	printf("\n%d\n", m[1][n]);
	print_optimal_parens(1, n);
	return 0;
}
