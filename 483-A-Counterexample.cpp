#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long m,n, cnt=0,ans=-1;
      cin>>m>>n;
      if(m&1)m++;
      if(abs(m-n)>=2)
      cout<<m<<" "<<m+1<<" "<<m+2<<endl;
      else
      cout<<ans<<"\n";
    return 0;
}