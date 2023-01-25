#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],fives=0,zeros=0;
    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      if(a[i]==5)
      {
        fives++;
      }
      else
      {
        zeros++;
      }
    }


    if(zeros==0)
    {
        cout<<"-1\n";
    }
    else
    {
    if(fives/9<=0)
    {
        cout<<"0\n";
    }
    else
    {
        int num = fives/9;
        for(int i=0;i<num*9;i++)
        {
            cout<<"5";
        }
        for(int i=0;i<zeros;i++)
        {

        cout<<"0";
        }
        cout<<"\n";
    }
    }


    return 0;
}