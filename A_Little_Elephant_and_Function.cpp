#include<bits/stdc++.h>

using namespace std;

int  a[1005];
 
void swapele(int a[],int x,int y)
{
    int temp = a[x];
    a[x]=a[y];
    a[y]=temp;
} 

void init(int n)
{
    for(int i=1;i<=n;i++)
    {
      a[i]=i;
    }
}

void swap(int n)
{
    if(n==1)
        return;

    swap(n-1);
    swapele(a,n-1,n);     
}

int main()
{
    int n;
    cin>>n;

    init(n);
    
    for(int i=0;i<n-1;i++)
    {
        swap(n);
    }

    

    for(int i=1;i<=n;i++)
    {
      cout<<a[i]<<" ";
    }

    return 0;
}