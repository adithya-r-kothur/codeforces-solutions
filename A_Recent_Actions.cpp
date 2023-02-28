#include<bits/stdc++.h>
using namespace std;


#define pb push_back
#define ppb pop_back
#define vi vector<int>
#define vll vector<ll>
#define all(x) (x).begin(), (x).end()


typedef long long ll;
typedef unsigned long long ull;
typedef long double lld;

void getIndex(vector<int> v, int K,int i)
{
    auto it = find(v.begin(), v.begin()+i, K);
  
    // If element was found
    if (it != v.end()) 
    {
      
        // calculating the index
        // of K
        int index = it - v.begin();
        cout << index << " ";
    }
    else {
        // If the element is not
        // present in the vector
        cout << "-1" << " ";
    }
}

int main()
{


int t;
cin>>t;


while(t--)
{
  int n,m;
  cin>>n>>m;
  vector<int> ans;

  vector<int> a;
  set<int> s;
  for(int i=0;i<m;i++)
  {
    int temp;

    cin>>temp;
    a.push_back(temp);
    s.insert(temp);
  }

  int rem = n-s.size();





    for(int i=0;i<m;i++)
    {
        
            auto it = find(a.begin(),a.begin()+i,a[i]);
            //getIndex(a,a[i],i);
            if(it!=a.end())
            {
                //
                ans.push_back((it-a.begin())+1);
            }
            else
            {
                ans.push_back(i+1);
            }
        
        
    }
    set<int> x;

    for(int i=0;i<ans.size();i++)
    {
        x.insert(ans[i]);
    }

    int dcb[n],j=0;
    for(int i=0;i<n;i++)
    {
        dcb[i]=-1;
    }
    for(auto i:x)
    {
        dcb[n-j-1]=i;
        j++;
    }

    for(auto g:dcb)
    {
        cout<<g<<" ";
    }

    cout<<"\n";



  }

 




return 0;
}