#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    bool flag =0;

    for(int i=0;i<n;i++)
    {
        int temp;
        cin>>temp;

        if(temp==1)
        {
            cout<<"HARD\n";
            flag=1;
            break;
        }
        
    } 
    if(!flag)
    {
        cout<<"EASY\n";
    }
    return 0;
}