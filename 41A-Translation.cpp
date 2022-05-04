#include<bits/stdc++.h>

using namespace std;

bool check_strings()
{
    string s,t;
    cin>>s>>t;

    int tn=t.size();
    int sn=s.size();

    for(int i=0;i<sn;i++)
    {
        if(s[i] != t[tn-1-i])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    if(check_strings())
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }
    
    return 0;
}