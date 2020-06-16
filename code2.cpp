#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

#define l1 long long
#define ar array

void solve(){
    int n;
    cin>>n;
    int a[n];
    for(int i  = 0 ;i<n;i++)
    cin>>a[i];
    int e = 0 ;
    int o = 0;
    for(int i  = 0 ;i<n;i++)
    {
        if(i%2!=a[i]%2)
        {
            if(a[i]%2==0)
            e++;
            else
            o++;
        }
    }
    if(!o && !e)
    cout<<0<<endl;
    else if(o==e)
    cout<<(o+e)/2<<endl;
    else
    cout<<-1<<endl;
    
    
}

int main()
{
ios::sync_with_stdio(0);
	cin.tie(0);
    int t;
    cin>>t;
   for(int i = 1; i<=t;i++)
    {
       
        solve();
    }
}
