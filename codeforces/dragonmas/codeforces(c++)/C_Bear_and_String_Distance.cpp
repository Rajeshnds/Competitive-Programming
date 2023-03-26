#include<bits/stdc++.h>
using namespace std;
int n,k,c;
string s;
int main(){
    cin>>n>>k>>s;
    for(int i=0;i<n&&k>0;i++){
        c=min(k,max(('z'-s[i]),(s[i]-'a')));
        k-=c;
        s[i]+=(s[i]+c>'z'?-c:c);
    }
        cout<<(k==0?s:"-1");
}