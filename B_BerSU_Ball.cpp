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
  int boys[n];
  for(int i=0;i<n;i++)
  {

    cin>>boys[i];
  }
  int m;
  cin>>m;
  int girls[m];
  for(int i=0;i<m;i++)
  {
    cin>>girls[i];
  }
    int k=0,j=0,count=0;
    sort(boys,boys+n);
    sort(girls,girls+m);
  for(int i=0;i<n;i++)
  {
        
    for(int j=0;j<m;j++)
    {
        if(abs(boys[i]-girls[j])<2)
        {
            girls[j]=1000;
            count++;
            break;
        }

    }
        
  }

  // if(n==1 || m==1)
  // {
  //   if(abs(boys[0]-girls[0])<=1)
  //   {
  //     count++;
  //   }
  // }

  cout<<count<<"\n";
  return 0;
}