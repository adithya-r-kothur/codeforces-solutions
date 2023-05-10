#include<bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,cnt=0;
        char next='?';
        cin>>n;

        string s;
        cin>>s;

        if(s[0]=='?')
        {
            for(int i=0;i<n-1;i++)
            {
                    cnt++;
                if(s[i]=='?' && s[i+1]!='?')
                {
                    next=s[i+1];
                    break;  
                }
            }
            if(next=='B' && cnt%2==0)
            {
                s[0]='B';
            }
            else if(next=='B' && cnt%2!=0)
            {
                s[0]='R';
            }
            else if(next=='R' && cnt%2!=0)
            {
                s[0]='B';
            }
            else if(next=='R' && cnt%2==0)
            {
                s[0]='R';
            }
            else
            {
                s[0]='B';
            }
        }



        
        

        for(int i=1;i<n;i++)
        {
            if(s[i]=='?' && s[i-1]=='B')
            {
                s[i]='R';
            }
            else if(s[i]=='?' && s[i-1]=='R')
            {
                s[i]='B';
            }
        }

        cout<<s<<"\n";
    }
    return 0;
}