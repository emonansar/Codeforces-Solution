#include <bits/stdc++.h>
using namespace std;
int main()
{
    int l=0,c=0;
    string a;
    cin>>a;
    for(int i=0;i<a.length();i++)
    {
        if(a[i]>=65 && a[i]<97)
        {
            c++;
        }
        else
        {
            l++;
        }
    }
    //cout<<l<<" "<<c<<endl;
    if(l>=c)
    {
        for(int j=0;j<a.length();j++)
        {
            if(a[j]<97)
            {
                a[j]=a[j]+32;
            }
            cout<<a[j];
        }
    }
    else
    {
        for(int j=0;j<a.length();j++)
        {
            if(a[j]>96)
            {
                a[j]=a[j]-32;
            }
            cout<<a[j];
        }
    }
}
