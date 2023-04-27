#include<bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n,ones=0,twos=0,sum=0;
        cin>>n;

        vector<int> a(n);

        for(int &i:a)
        {
            cin>>i;
            if(i==1)
                ones++;
            else
                twos++; 

            sum+=i;       
        }

        if(sum%2!=0)
        {
            cout<<"NO\n";
        }
        else
        {
            int a = sum/2;
            if (a % 2 == 0 || (a % 2 == 1 && ones != 0)) 
            {
                cout << "YES\n";
                
            } 
            else              
            {
                cout << "NO\n";
            }
        }
        

    }
    return 0;
}