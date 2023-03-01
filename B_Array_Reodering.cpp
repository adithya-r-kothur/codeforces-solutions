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


int t;
cin>>t;


while(t--)
{
  int n,ans=0;
  cin>>n;
  
  int a[n];
  vector<int> odd,eve;

  for(int i=0;i<n;i++)
  {
    
    cin>>a[i];

    if(a[i]%2==0)
        eve.push_back(a[i]);
    else
        odd.push_back(a[i]);    
  }
  sort(eve.begin(),eve.end());
  sort(odd.begin(),odd.end());

  int x=eve.size(),y=odd.size();
  vector<int> fin(n);
  int z=0;
  for(int i=0;i<x;i++)
  {
    fin[z++]=eve[i];
  }

  for(int i=0;i<y;i++)
  {
    fin[z++]=odd[i];
  }

  for(int i=0;i<n;i++)
  {
    for(int j=i+1;j<n;j++)
    {
      if(__gcd(fin[i],2*fin[j])>1)
        ans++;
    }
  }

  cout<<ans<<"\n";

}
return 0;
}