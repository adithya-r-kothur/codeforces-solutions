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
  int n,flag=0,i=0;
  cin>>n;
  string s;
  cin>>s;

  if(n==1)
    cout<<"1\n";
   else
   { 
  for( i=0;i<(n/2)+1;i++)
  {
    if(s[i]==s[n-i-1])
    {     
        
        flag=1;
        break;
    }
  }

  if(flag)
    cout<<n-2*i<<" \n";
  else
    cout<<"0\n";  
   }



 


}
return 0;
}