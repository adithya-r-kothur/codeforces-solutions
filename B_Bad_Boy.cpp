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
  int n,m,x,y;
  cin>>n>>m>>x>>y;


  int rel[4];


  if(x==1 && y==1 )
  {
    if(m==1)
        cout<<n<<" "<<m<<" 1 "<<"1\n";
    else
        cout<<n<<" "<<m<<" 1 "<<"2\n";   
  }
  else
  {
    cout<<"1 1 "<<n<<" "<<m<<"\n";
  }




}
return 0;
}