#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;

    string ans ="hello";

    int n=s.size();
    int count=0,j=0;
    

    for(int i=0;i<n;i++)
    {
        if(s[i]==ans[j])
        {
            j++;
            count++;
        }

        if(count==5)
        {
            break;
        }

    }

   
        if(count==5)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    return 0;
}