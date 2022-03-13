#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int number;
    cout << "Enter your favorate digit  ";
    cin >> number;
    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            cout << " " << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}