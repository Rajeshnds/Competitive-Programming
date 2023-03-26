#include<bits/stdc++.h>
using namespace std;
int n,d,e,ans,a[5];
#define rep(i,n) for(int i=0;i<n;i++)
string t,s[5]={"S","M","L","XL","XXL"};
map<string,int>m;
int T_shirt(){
    rep(i,5)cin>>a[i],m[s[i]]=i;
    cin>>n;
    rep(i,n){
        cin>>t;
        d=m[t];
        e=0;
        for(d+e;;e++){
            if(d+e>=0&&d+e<5&&a[d+e]>0){ans=d+e;break;}
            if(d-e>=0&&d-e<5&&a[d-e]>0){ans=d-e;break;}
        }
        cout<<s[ans]<<endl;
        a[ans]--;
    }
}
int main(){
    T_shirt();
}
