#include<bits/stdc++.h>
using namespace std;
int d,n,f;
string s,t;
int main(){
    for(cin>>d;d--;){
        f=1;
        t="";
        cin>>n>>s;
        s+='.';
        int a[26]={0};
        for(int i=0;i<n;i++){
            if(s[i]!=s[i+1])t+=s[i];
        }
        for(int i=0;i<t.size();i++){
            if(a[t[i]-'A']==1)f=0;
            a[t[i]-'A']=1;
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}
