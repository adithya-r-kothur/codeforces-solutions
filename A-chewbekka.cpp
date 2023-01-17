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
  long long x;
  cin>>x;


  

  long long dupx=x;
  int count=0;

  while(x>0)
  {
    x=x/10;
    count++;
  }

  int a[count],digit,k=0;

  while(dupx>0)
  { if(dupx==9)
    {
        
        a[k++]=9;
        dupx=dupx/10;
    }
    
    else
    {
        if(dupx%10>4)
    {
        digit =dupx%10;
        dupx=dupx/10;
        digit=9-digit;
        a[k++]=digit;
    }
    else
    {
        digit=dupx%10;
        dupx=dupx/10;
        a[k++]=digit;
    }
    }

  }  
  

    for(int i = count-1;i>=0;i--)
    {
        cout<<a[i];   
    }
    cout<<"\n";

    
  
  return 0;
}