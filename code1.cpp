#include <bits/stdc++.h>
#include <algorithm>
#include <vector>
using namespace std;

#define l1 long long
#define ar array

void solve(){
    string s;
    cin>>s;
    if(s.length()<=3)
    {cout<<s<<endl;
        return;
    }
    
    string p="";
    p+=s[0];
    for(int i  = 1 ;i<s.length()-1;i++)
    {
        if(s[i]==s[i+1])
        {p+=s[i];
        i++;}
    }
    p+=s[s.length()-1];
    cout<<p<<endl;
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
