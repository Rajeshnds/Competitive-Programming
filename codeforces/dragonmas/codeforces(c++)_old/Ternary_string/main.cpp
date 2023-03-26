#include<bits/stdc++.h>
using namespace std;
int ternary_string(string s){
    int m=s.size()+1,a[4]={-1,-1,-1,-1};
    for(int i=0;i<s.size();i++){
        a[s[i]-48]=i;
        if(a[1]!=-1&&a[2]!=-1&&a[3]!=-1){
            m=min(m,i-min(a[1],min(a[2],a[3]))+1);
        }
    }
    return m==s.size()+1?0:m;
}
int main(){
    int t;
    string s;
    for(cin>>t;t--;)cin>>s,cout<<ternary_string(s)<<endl;
}
