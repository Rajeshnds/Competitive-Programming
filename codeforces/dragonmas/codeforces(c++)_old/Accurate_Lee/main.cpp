#include<bits/stdc++.h>
using namespace std;
void clean_string(int n,string s){
    int f=1,k=-1;
    for(int i=n-1;i>=0;i--)if(s[i]=='0'&&f)f=0,k=i;
    f=1;
    if(k==-1)cout<<s;
    else{
    for(int i=0;i<k;i++){
        if(s[i]=='1')f=0;
        if(f)cout<<s[i];
    }
    for(int i=k;i<n;i++)cout<<s[i];
    }
}
int main(){
    int t,n;
    string s;
    for(cin>>t;t--;cout<<endl){
        cin>>n>>s;
        clean_string(n,s);
    }
}
