#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "how many digits pattern you want ";
    cin >> num;
    int i = 1;  // this will itrate the row 
    while (i <= num)
    {
        int j = 1;  // this will ittrate the column
        while (j <= num)
        {
            cout << " * ";
            j++;  // this will joump to next column
        }
        cout << endl;
        i++;  // this will jump to next row 
    }
}