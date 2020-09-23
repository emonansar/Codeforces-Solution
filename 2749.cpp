#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s="x = 35";
    int l=0;
    for(int i=0;i<39;i++)
    {
        cout<<"-";
    }
    cout<<endl;
    for(int i=1;i<=5;i++)
    {
        cout<<"|";
        for(int j=2;j<39;++j)
        {
            if((i==1 && j==2)||(i==3 && j==17))
            {
            cout<<s;
            j+=6;
            cout<<" ";
            }
            else if((i==5 && j==33)){
            cout<<s;
            j+=6;
            }
            else
            {
               cout<<" ";
            }
        }
        cout<<"|"<<endl;
        l=0;
    }
    for(int i=0;i<39;i++)
    {
        cout<<"-";
    }
    cout<<endl;
}
