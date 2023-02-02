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
  int n,sum=0,nones=0,flag=0;
  cin>>n;

  int a[n];
  for(int i=0;i<n;i++)
  {
    cin>>a[i];
  }

  for(int i=0;i<n;i++)
  {
    if(a[i]==-1)
        nones++;

    if(a[i]==a[i+1] && a[i]==-1)
    {
            //cout<<"yes\n";
        flag=1 ;
    }   
    sum+=a[i];
  }

  if(nones==0)
    cout<<sum-4<<"\n";
  else
  {
    if(flag)
        cout<<sum+4<<"\n";
    else
        cout<<sum<<"\n";    
  }  


}
return 0;
}