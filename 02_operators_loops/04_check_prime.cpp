//important question

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number";
    cin >> num;
    bool is_Prime = true;
    for (int i = 2; i < num; i++)
    {
        if (num % i == 0)
        {

            is_Prime = false;

            break;
        }
    }
    if (is_Prime == false)
    {
        cout << "It not a  prime";
    }
    else
    {
        cout << "It is a   prime";
    }
}