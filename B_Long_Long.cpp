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

void solve(int a[],int z)
{
    int t;
    cin>>t;
    while(t--)
    {

    }

    // vector<int> a(t);
    int sum;

    // for(int &i:a)
  {
    // cin>>i;

    // sum+=abs(i); 

         
  }
}


int main()
{


int t;
cin>>t;


while(t--)
{
  ll n,ans=0,flag=0,sum=0;
  cin>>n;

  vector<ll>a(n),p(n);

  for(ll &i:a)
  {
    cin>>i;

    sum+=abs(i); 

         
  }

  
    for(ll i=0;i<n;i++)
    {
        if(a[i]<0)
        {
            if(flag==0)
                ans++;
            flag=1;
        }
        if(a[i]>0)
        {
            flag=0;
        }
    }  

    cout<<sum<<" "<<ans<<"\n"; 

 
  
  



}
return 0;
}