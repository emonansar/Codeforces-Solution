#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int l=0,i,j,c=0;
    cin>>a>>b;
    l=a.length();
    for(i=0,j=l-1 ; i<l,j>=0; i++,j--)
    {
        if(a[i]==b[j])
        {
            c++;
        }
        if(a[i]!=b[j])
        {
            cout<<"NO"<<endl;
            return 0;
        }
    }
    if(c==l)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
