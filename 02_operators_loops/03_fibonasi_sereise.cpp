#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1; // these are starting two number
    int num;
    cout << "Enter the number";
    cin >> num;

    for (int i = 1; i < num; i++)
    {
        int next_number = a + b;
        cout << a, b << next_number;  // here a and b will print starting 0 and 1 value 
        a = b;
        b = next_number;
    }
}