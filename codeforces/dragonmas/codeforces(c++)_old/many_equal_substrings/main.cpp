#include<bits/stdc++.h>
using namespace std;
int n,k,f;
string s,t;
int main(){
    cin>>n>>k>>s;
    for(int i=0;i<n-1;i++){
        if(s.substr(0,i+1)==s.substr(n-i-1))f=i+1;
    }
    cout<<s;
    for(int i=1;i<k;i++)cout<<s.substr(f);
}
