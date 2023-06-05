#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,n,i;
    n1=0;
    n2=1;
    cout<<"Enter the number of terms: ";
    cin>>n;
    cout<<"Fibonacci series are: ";
    for(i=0;i<=n;i++)
    {
        cout<<n1<<" ";
        n3=n1+n2;
        n1=n2;
        n2=n3;
    }
    return 0;
}
