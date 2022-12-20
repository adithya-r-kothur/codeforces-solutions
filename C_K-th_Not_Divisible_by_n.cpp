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
    ll n,k;
    cin>>n>>k;
    
    ll div = k/(n-1);
    ll ex = k%(n-1);
    ll ans = n*div+ex;
    if(ex==0)
    {
        ans--;
    }
    cout<<ans<<"\n";



}
return 0;
}