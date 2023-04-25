#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int l =s.find('a');
        if(l==string::npos)
        {
            cout<<"NO\n";
            continue;
        }

        int n = s.size(),r=l;

    bool flag =true;

    for(int i =1;i<n;i++)
    {
        int pos  = s.find('a'+i);

        if(pos==string::npos || (pos!=l-1 && pos!=r+1) )
        {
            flag=false;
            break;
        }
        else
        {
            l=min(l,pos);
            r =max(r,pos);
        }

    }

    cout<<(flag ? "YES\n" : "NO\n" );



        

    }
    return 0;
}