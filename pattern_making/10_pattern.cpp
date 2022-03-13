/*

 X  X  X  X  X
  X  X  X  X
  X  X  X
  X  X
  X
  
  */
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int i = 1;
    int number;
    cout << "Enter the number";
    cin >> number;
    while (i <= number)
    {
        int j = 1;
        while (j <= (number - i)) // IMPORETANT logic
        {
            cout << " ";
            cout << " X";
            j++;
        }
        i++;
        cout << endl;
    }
}