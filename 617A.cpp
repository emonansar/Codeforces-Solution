#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,d;
    cin>>n;
    if(n>=1 && n<=5)
    {
        cout<<1<<endl;
    }
    else if(n>5)
    {
        d=n/5;
        if(n%5==0)
        {
            cout<<d<<endl;
        }
        else
        cout<<d+1<<endl;
    }
}
