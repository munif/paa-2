#include <bits/stdc++.h>

using namespace std;

bool sortbysec(const pair<int, int> &a, const pair<int, int> &b)
{
    return (a.second < b.second);
}

int main()
{
    int n, length;
    vector< pair <int, int> > input;

    cin >> n;
    for (int i=0; i<n; i++)
    {
        cin >> length;
        input.push_back(make_pair(i+1, length));
    }

    sort(input.begin(), input.end(), sortbysec);

    int total = 0;
    for (int i=0; i<n; i++)
    {
        total += input[i].second * (n-i);
    }

    for (int i=0; i<n; i++)
    {
        cout << input[i].first << " ";
    }
    cout << endl << total << endl;
}
