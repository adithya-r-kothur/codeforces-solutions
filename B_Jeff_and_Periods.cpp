#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,pos=INT_MAX;
    cin>>n;
    int a[n];
    
    map<int,vector<int>> ma;


    for(int i=0;i<n;i++)
    {
      cin>>a[i];
      ma[a[i]].push_back(i);
    }
    map<int,vector<int>>::iterator it;
    it=ma.begin();

    vector<pair<int,int>> v;

    while(it!=ma.end())
    {
        int k=it->first;

        if(ma[k].size()==1)
            v.push_back({k,0});

        else
        {
            set<int> s;
            for(int i=1;i<ma[k].size();i++)
                s.insert(abs(ma[k][i]-ma[k][i-1]));


            set<int>::iterator q=s.begin();

            if(s.size()==1)
                v.push_back({k,*q});    
        }  
        it++;  
    }



    cout<<v.size()<<"\n";

    for(int i=0;i<v.size();i++)
        cout<<v[i].first<<" "<<v[i].second<<"\n";
    return 0;
}