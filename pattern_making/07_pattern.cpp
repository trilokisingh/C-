#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int number;
    cout << "Enter favorate number ";
    cin >> number;

    while (i <= number)
    {
        int j = 1;

        while (j <= i)
        {
            cout << i - j + 1;
            j++;
        }

        cout << endl;
        i++;
    }
}