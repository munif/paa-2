#include <iostream>

using namespace std;

long long fibonacci(int A)
{
    long long hasil, temp1, temp2;
    if (A == 1 || A == 2)
        return 1;
    else
    {
        hasil = 0;
        temp1 = 1;
        temp2 = 1;
        for (int i=3; i<= A; i++)
        {
            hasil = temp1 + temp2;
            temp1 = temp2;
            temp2 = hasil;
        }
        return hasil;
    }
}


int main()
{
    int n;
    cin >> n;
    cout << fibonacci(n);
}

