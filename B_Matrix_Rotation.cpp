#include<iostream>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void rotation(int a[],int n)
{int temp;

    temp =a[0];
    a[0]=a[1];
    a[1]=temp;

    temp=a[2];
    a[2]=a[3];
    a[3]=temp;

    temp = a[1];
    a[1]=a[2];
    a[2]=temp;

}
int main()
{


int t;
cin>>t;


while(t--)
{
  int a[4];
  for(int i=0;i<4;i++)
  {
    cin>>a[i];
  }


  int j=4,count;
  while(j--)
  {
    count=0;
    if(a[0]<a[1])
    {
        count++;
    }
    if(a[0]<a[2])
    {
        count++;
    }
    if(a[1]<a[3])
    {
        count++;
    }
    if(a[2]<a[3])
    {
        count++;
    }
    
    if(count==4)
    {
        break;
    }
    
    rotation(a,4);

   
    
  }


    if(count==4)
    {
        cout<<"YES\n";

    }
    else{
        cout<<"NO\n";
    }

}
return 0;
}