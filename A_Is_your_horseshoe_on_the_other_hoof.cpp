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
  int a[4];
  for(int i=0;i<4;i++)
  {
    cin>>a[i];
  }
  sort(a,a+4);
  int count=0;
  for(int i=0;i<3;i++)
  {
    if(a[i]==a[i+1])
    {
        count++;
    }
  }

  cout<<count<<"\n";
  return 0;
}