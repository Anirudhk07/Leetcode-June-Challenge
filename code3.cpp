#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

#define l1 long long
#define ar array

void solve(){
l1 n,k;
cin>>n>>k;
string s;
cin>>s;
int count = 0 ;
int flag = 0;
if(k>=n)
{
    for(int i  = 0 ;i<n;i++)
    {
        if(s[i]!='0')
        {
            cout<<"0"<<endl;
            return;
        }
    }
    cout<<"1"<<endl;
    return;
}
int f=0;
if(s.length()%2!=0 &&s[0]=='0')
{
    for(int j = 1 ; j <=k;j++)
    {
        if(s[j]!='0')
        {
            f = 1;
        }
    }
if(!f)
count++;
}

if(n%2!=0 &&s[n-1]=='0')
{
    for(int j = 1 ; j <=k;j++)
    {
        if(s[n-j-1]!='0')
        {
            f = 1;
        }
    }
if(!f)
count++;
}

for(int i  = k ;i<n-k;i++)
{
    flag = 0;
    if(s[i]=='0')
    {
        for(int j = 1 ; j <=k;j++)
        {
            if(s[i+j]!='0' || s[i-j]!='0')
            {
                flag = 1;
               continue;
            }
            
        }
      
    }
    if(!flag && s[i]=='0')
        count++;
}
cout<<count<<endl;
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
