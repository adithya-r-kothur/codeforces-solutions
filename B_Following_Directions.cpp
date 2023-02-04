#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


int main()
{


int t;
cin>>t;


while(t--)
{
  
int n;
cin>>n;
string s;
cin>>s;

int x=0,y=0,flag=0;

for(int i=0;i<n;i++)
{
    if(s[i]=='L')
        x--;
    else if(s[i]=='R')
        x++; 
    else if(s[i]=='U')
        y++; 
    else if(s[i]=='D')
    y--;  

    //cout<<x<<" "<<y<<"\n"; 
    if(x==1 && y==1)
        flag=1;  
}

if(flag)
cout<<"YES\n";
else
cout<<"NO\n";

}
return 0;
}