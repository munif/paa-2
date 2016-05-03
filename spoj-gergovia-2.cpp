#include <iostream>
#include <cstdlib>

using namespace std;

long long sum, cost;

int main()
{
    int n, x;

    cin >> n;
    while(n != 0)
    {
        sum = 0;
        cost = 0;
        for (int i=0; i<n; i++)
        {
            cin >> x;
            sum += x;
            cost += (long long) fabs(double(sum));
        }

        printf("%lld\n", cost);
        scanf("%d", &n);
    }
}
