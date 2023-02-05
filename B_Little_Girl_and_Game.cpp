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


int main()
{
  string s;
  cin>>s;

  int n=s.size();
  map<char,int> m;

  for(auto c:s)
  {
    m[c]++;
  }

    int even=0,odd=0;
  for(auto it:m)
  {
    if(it.second%2==0)
    {
        even++;
    }
    else
    {
        odd++;
    }
  }


  if(odd==0)
  {
    cout<<"First\n";
  }
  else
  {

  if(odd%2!=0)
  {
    cout<<"First\n";
  }
  else
  {
    cout<<"Second\n";
  }
  }
  return 0;
}