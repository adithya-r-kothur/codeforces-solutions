#include<bits/stdc++.h>

using namespace std;

string form(map<char,int> m,int k)
{
    string ans="";

    map<char,int>::iterator it=m.begin();

    while(it!=m.end())
    {
        for(int i=0;i<it->second/k;i++)
        {
            ans+=it->first;
        }
        it++;
    }

    return ans;
}

int main()
{
    int k;
    cin>>k;
    string s;
    cin>>s;

    int n = s.size(),flag=0;
    map<char,int> ma;

    for(int i=0;i<n;i++)
    {
      ma[s[i]]++;
    }

    map<char,int>::iterator it = ma.begin();

    while(it!=ma.end())
    {
        if(it->second%k!=0)
        {
            flag=1;
            break;
        }

        ++it;
    } 

    if(flag)
    {
        cout<<"-1\n";
    }
    else
    {
        string rep =form(ma,k);

        for(int i=0;i<k;i++)
        {
            cout<<rep;
        }

        cout<<"\n";
    }
    return 0;
}