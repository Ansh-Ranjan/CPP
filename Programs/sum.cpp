/*
Problem: To print sum of first n numbers.
*/

#include <iostream>
using namespace std;
int main() {
        int a,n=0;
        cout<<"Enter a number: ";
        cin>>n;
        for(int i=1;i<=n;i++)
           n=n+i;
        cout<<endl<<"Sum of 10 to "<<a<<" is = "<<n;
    return 0;
}
