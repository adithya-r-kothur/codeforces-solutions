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

        int n =s.size();
        sort(s.begin(),s.end());

        cout<<s<<"\n";

    }
    return 0;
}