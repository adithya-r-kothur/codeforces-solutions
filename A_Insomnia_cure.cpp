#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
 
// Returns LCM of array elements
ll findlcm(int arr[], int n)
{
    // Initialize result
    ll ans = arr[0];
 
    // ans contains LCM of arr[0], ..arr[i]
    // after i'th iteration,
    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) /
                (gcd(arr[i], ans)));
 
    return ans;
}


int main()
{
  int k,l,m,n,d;
  cin>>k>>l>>m>>n>>d;
    int ans=0;
  for(int i=1;i<d+1;i++)
  {
    if(i%k==0 ||i%l==0||i%m==0||i%n==0 )
    {
        ans++;
    }
  }

  cout<<ans<<"\n";
  return 0;
}