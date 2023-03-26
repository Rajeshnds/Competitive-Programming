#include<bits/stdc++.h>
using namespace std;
int t,n,x,a,b[200001],m,d;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>a;
            b[a]=i;
        }
        m=0;
        d=n;
        string s="";
        for(int i=1;i<=n;i++){
            m=max(m,b[i]),d=min(d,b[i]);
            if(m-d==i-1)s+='1';
            else s+='0';
        }
        cout<<s<<endl;
    }
}
