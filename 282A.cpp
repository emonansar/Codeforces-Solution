#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,n;
    cin>>n;
    string a;
    for(int i=1;i<=n;i++)
    {
        cin>>a;
        if(a='++x')
        {
            l=l+1;
        }
    }
    cout<<l<<endl;
}
