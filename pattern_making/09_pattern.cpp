#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int number;

    cout << "Enter the number ";
    cin >> number;

    while (i <= number)
    {
        int j = 1;
        while (j <= number)
        {
            char ch = 'A' + i - 1; // these logic are important
            cout << " "<<ch<<" ";

            j++;
        }
        i++;
        cout << endl;
    }
}