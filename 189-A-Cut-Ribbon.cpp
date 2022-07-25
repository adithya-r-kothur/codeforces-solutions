#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b,c;
    cin>>n>>a>>b>>c;

   
    
    int ans=min(a,min(b,c));
    if(n%ans==0)
    {
        cout<<n/ans<<"\n";
    }
    else
    {
        cout<<(n/ans)-1<<"\n";
    }
    
    return 0;
}