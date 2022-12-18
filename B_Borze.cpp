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



  string s;
  cin>>s;
  bool flag=0;
  int n=s.length();
  for(int i=0;i<n;i++)
  {
    if(s[i]=='.' && flag==0)
    {
        cout<<"0";
        flag=0;
    }
    else if(s[i]=='.' && flag==1)
    {
        cout<<"1";
        flag=0;
    }
    else if(s[i]=='-' && flag==1)
    {
        cout<<"2";
        flag=0;
    }
    else if(s[i]=='-')
    {
        flag=1; 
    }
  }



return 0;
}