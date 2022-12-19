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
  int k,n;
  cin>>k>>n;
    int curr=1,add=1;
    
  for(int i=1;i<=k;i++)
  {
    cout<<curr<<" ";
    if(n-(curr+add)>=(k-(i+1)))
    {
      curr=curr+add;
      add++;
    }
    else
    {
      curr++;
    }

  }
  cout<<"\n";


  

}
return 0;
}