#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int number;

    cout << "Enter your favorite digits ";
    cin >> number;

    while (i <= number)
    {
        int j = 1;
        while (j <= i)
        {
            cout << " " << i << " ";
            j++;
        }
        i++;
        cout << endl;
    }
}