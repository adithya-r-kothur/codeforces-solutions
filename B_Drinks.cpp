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
  double sum=0;
   int ele;
  for(int i=0;i<n;i++)
  {
    cin>>ele;
    sum+=ele;
  }
  cout << fixed << setprecision(12);
  cout<<sum/n<<"\n";
  
  return 0;
}