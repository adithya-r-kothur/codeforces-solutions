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
  int sum=0;
  for(int i=0;i<n;i++)
  {
    int temp;
    cin>>temp;
    sum+=temp;
  }

  n=n+1;
  //cout<<n<<"\n";
  int count=0,flag=0;
  int z[5];
  for(int i=1;i<5;i++)
  {
    z[i]=n*i+1;
  }
  for(int i=1;i<=5;i++)
  {
    flag=0;
         for(int j=0;j<5;j++)
         {
           if(sum+i==z[j])
           {
            flag=1;
            break;
           }
         }
         if(flag!=1)
         {
            count++;
         }
  }

  cout<<count<<"\n";
  return 0;
}