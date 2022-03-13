/*1  2  3  4  5 
 6  7  8  9  10
 11  12  13  14  15 
 16  17  18  19  20
 21  22  23  24  25*/


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int count = 1;
    int i = 1;
    int digit;
    cout << "enter your favorate digits ";
    cin >> digit;

    while (i <= digit)
    {
        int j = 1;
        while (j <= digit)
        {
            cout <<" " <<count<<" ";
            count++;
            j++;
        }
        i++;
        cout << endl;
    }
}