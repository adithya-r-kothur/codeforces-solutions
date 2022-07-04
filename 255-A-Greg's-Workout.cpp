#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
       cin>>a[i];
    }

    int chest=0,biceps=0,back=0;
    for(int i=0;i<n;i+=3)
    {
        chest+=a[i];
    }
    for(int i=1;i<n;i+=3)
    {
        biceps+=a[i];
      
    }
    for(int i=2;i<n;i+=3)
    {
        back+=a[i];
      
    }

    //cout<<chest<<" "<<biceps<<" "<<back<<"\n";
    if(n>=4)
    {

    if(chest>biceps && chest>back)
    {
        cout<<"chest\n";
    }
    else if(biceps>chest && biceps>back)
    {
        cout<<"biceps\n";
    }
    else if(back>chest && back>biceps)
    {
        cout<<"back\n";
    }
    }
    else
    {
        if(n==1)
        {
            cout<<"chest\n";
        }
        else if(n==2)
        {
            if(a[0]>a[1])
            {
                cout<<"chest\n";
            }
            else
            {
                cout<<"biceps\n";
            }
        }
        else if(n==3)
        {
            if(a[0]>a[1] && a[0]>a[2])
            {
                cout<<"chest\n";
            }
            else if(a[1]>a[0] && a[1]>a[2])
            {
                cout<<"biceps\n";
            }
            else if(a[2]>a[1] && a[2]>a[0])
            {
                cout<<"back\n";
            }
        }
    }
    return 0;
}