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
  string c="codeforces";
  char s;
  cin>>s;
  int flag=0;

  for(int i=0;i<c.size();i++)
  {
    if(s==c[i])
    {
        flag=1;
        break;
    }
  }

  if(flag)
  cout<<"YES\n";
  else
  cout<<"NO\n";



}
return 0;
}