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
  int n,x;
  cin>>n>>x;

  int a[n],odd=0,even=0;
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
    if(a[i]%2!=0)
    {
        odd++;
    }
    else
    {
        even++;
    }
  }
    int m = min(even,x-1);
    int d = x - m;

    if(d % 2 == 0)
    {
            d++;
    }
    if(odd >= d && d <= x)
      cout<<"Yes\n";
    else 
      cout<<"No\n";

}
return 0;
}