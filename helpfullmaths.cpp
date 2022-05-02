#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int n=s.size();
    int a[100]={0};
    int count =0;

    for(int i=0;i<n;i++)
    {
        if(s[i] =='+')
        {
          continue; 
        }
        else
        {
            a[count++]=s[i]-'0';
        }
        
    }
   
    sort(a,a+count);

    for(int i=0;i<count;i++)
    {
       cout<<a[i];
       if(i==count-1){
	        break;
	    }
	    cout<<"+";
    }
    return 0;
}