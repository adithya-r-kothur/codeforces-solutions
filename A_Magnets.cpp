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
  int n;
  cin>>n;
  string a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }
  int count=0;
  for(int i=0;i<n-1;i++)
  {
    if(a[i][1]!=a[i+1][1])
    {
        count++;
    }
  }

  cout<<count+1<<"\n";
  return 0;
}