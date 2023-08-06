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

  vector<int> a(n);

  for(int &i:a)
  {
    cin>>i;
  }

  sort(a.begin(),a.end(),greater<int>());


//   for(int i:a)
//   {
//     cout<<i<<" ";
//   }
//   cout<<"\n";

  for(int i=0;i<n/2;i++)
  {
    int temp;
    temp = a[i]-a[n-1-i];
    // cout<<temp<<"\n";
    ans+=temp;
  }

  cout<<ans<<"\n";


}
return 0;
}