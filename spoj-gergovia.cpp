#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int n = 1, cost = 0;
    int demand[100000];

    while(n != 0)
    {
        cost = 0;
        cin >> n;
        for(int i=0; i<n; i++)
        {
            cin >> demand[i];
        }

        for(int i=1; i < n; i++)
        {
            demand[i] = demand[i] + demand[i-1];
            cost += abs(demand[i-1]);
        }

        cout << cost << endl;
        cin >> n;
    }
}
