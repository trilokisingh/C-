#include<bits/stdc++.h>
using namespace std;

int main(){
    int digit;
    cout<<"enter your favorate digit ";
    cin>>digit;
    int i=1;  // this is for row 
    while (i<=digit){
        int j =1;  // this will ittirate column
        while (j<=digit)
        {
            cout<<" "<<i<<" ";
            j++;  // increase column by 1
        }
        cout<<endl;
        i++;  // increase row by 1

    }

}