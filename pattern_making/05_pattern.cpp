/*

 * 
 *  *
 *  *  *
 *  *  *  *
 *  *  *  *  *


*/

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
        while (j <= i) // this is important here when j = 1 than j = 1 
        {
            cout << " * ";
            j++;
            
        }
        
        cout<<endl;
        i++;
    }
}