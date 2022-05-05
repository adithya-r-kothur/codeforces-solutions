#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    string s;
    cin>>s;

    unordered_map<char,int> m;

    for(int i=0;i<n;i++)
    {
        m[s[i]]++;
    }
    if(m['A']>m['D'])
    {
        cout<<"Anton\n";
    }
    else if(m['A']<m['D'])
    {
        cout<<"Danik\n";
    }
    else
    {
        cout<<"Friendship\n";
    }
    return 0;
}