#include<bits/stdc++.h>

using namespace std;


int main()
{

    int n;
    cin>>n;
    int num =n;

    int part=0;
    int count=0,i=0;

   while(num)
   {
       i++;
       part=num%10;
       num=num/10;

       if(part==4 || part==7)
       {
           count++;
       }
   }


    if(count==i)
    {
        cout<<"YES\n";
    }
    else if(n%4==0 || n%7==0 || n%47==0 || n%44==0 || n%74==0 || n%447==0 || n%474==0 || n%744==0 || n%477==0 || n%744==0)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }


    return 0;
}