#include <bits/stdc++.h>
using namespace std;

int main() 
{

    int marks[3];
    int total_Marks = 0;

    for (int i = 0; i <= 2; i++)
    {
        cout << "enter the subject  marks";
        cin >> marks[i];
        total_Marks += marks[i];
    }

    if ((total_Marks * 100) / 300 >= 40)
    {

        if (marks[0] < 30 || marks[1] < 30 || marks[2] < 30) // will check the condition
        {
            cout << "failed";
        }
        else
            cout << "pass";
    }

    else
        cout << "sorry fail";
}