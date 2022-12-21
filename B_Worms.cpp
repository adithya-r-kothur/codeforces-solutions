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
  int a[n];
  cin>>a[0];
  int track[n];
  track[0]=a[0];

  for(int i=1;i<n;i++)
  {
    cin>>a[i];
    track[i]=track[i-1]+a[i];
  }
//   int worms[track[n-1]+1],k=0;
//   for(int i=1;i<=track[n-1];i++)
//   {
//     if(i>track[k])
//     {
//         k++;
//     }
//     worms[i]=k+1;
//   } 

  int res[track[n-1]];
    int f=1,y=1;
  for(int i=0;i<n;)
  {
    if(a[i]!=0)
    {
        res[f++]=y;
        a[i]--;
    }
    else{
        i++;
        y++;
    }
  }



  int m;
  cin>>m;

  int x;
  for(int i=0;i<m;i++)
  {
    cin>>x;
    cout<<res[x]<<"\n";
  }


  
//   cout<<" \n";
//     for(int i=1;i<=track[n-1];i++)
//     {
//       cout<<res[i]<<" ";
//     }
  return 0;
}