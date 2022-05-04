#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;

    cin>>n>>t;

    string s;
    cin>>s;

    int q=s.size();
    char ans[q]={'q'};

        bool flag=1;
    while(t--)
    {
        for(int i=0;i<q;i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                ans[i]='G';
                ans[i+1]='B';
                flag=0;
            }
            
            else if(flag)
            {
                ans[i]=s[i];
                ans[i+1]=s[i+1];
                flag=1;
            }
            else if(!flag)
            {
                ans[i+1]=s[i+1];
                flag=0;
            }
        }
        for(int i=0;i<q;i++)
        {
            s[i]=ans[i];
        }
       
    }

    for(int i=0;i<q;i++)
    {
        cout<<ans[i];
    }cout<<"\n";
    return 0;
}