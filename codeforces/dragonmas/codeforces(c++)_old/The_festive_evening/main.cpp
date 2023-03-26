#include<bits/stdc++.h>
using namespace std;
int n,k,m,l,a[26];
string s;
set<char>c;
string open_door(){
    cin>>n>>k>>s;
    for(int i=0;i<n;i++)a[s[i]-'A']=i;
    for(int i=0;i<n;i++){
        c.insert(s[i]);
        if(c.size()>k)return "YES";
        if(a[s[i]-'A']==i)c.erase(s[i]);
    }
    return "NO";
}
int main(){
    cout<<open_door();
}
