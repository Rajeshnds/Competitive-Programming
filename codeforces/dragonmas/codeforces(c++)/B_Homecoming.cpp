#include<bits/stdc++.h>
using namespace std;
int t,a,b,p,c,i;
string s;
int main(){
    for(cin>>t;t--;){
        cin>>a>>b>>p>>s;
        c=0;
        for(i=s.size()-2;i>=0;i--){
            if(s[i]!=c){
                c=s[i];
                p-=(s[i]=='A'?a:b);
                if(p<0)break;
            }
        }
        cout<<i+2<<endl;
    }
}