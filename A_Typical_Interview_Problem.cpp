#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

bool isSubstring(string s1, string s2)
{
    if (s2.find(s1) != string::npos)
        return 1;
    return 0;
}

int main()
{


int t;
cin>>t;


while(t--)
{
  int n;
  cin>>n;

  string s,temp="FBFFBFFB",check="";
  cin>>s;

  for(int i=0;i<9;i++)
  {
    check+=temp;
  }

  if(isSubstring(s,check))
  {
    cout<<"YES\n";
  }
  else
  {
    cout<<"NO\n";
  }




}
return 0;
}