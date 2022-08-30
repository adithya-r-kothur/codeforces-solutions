#include<bits/stdc++.h>

using namespace std;

int main()
{
 int k,count=0;
long double l;
 cin>>k>>l;
 
    while(l>1)
    {
        l=l/k;
        count++;
        
    }
    
 if(l==1)
 {
    cout<<"YES\n";
    cout<<count-1<<"\n";
 }
 else if(k==l)
 {
    cout<<"YES\n";
    cout<<"0\n";
 }
 else
 {
    cout<<"NO\n";
 }
 return 0;
}