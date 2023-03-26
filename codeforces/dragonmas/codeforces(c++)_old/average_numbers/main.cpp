#include<bits/stdc++.h>
using namespace std;
int n,a[200001],j,c[200001],s,b;
pair<int,int>p[200001];
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>b;
        p[i].first=b;
        p[i].second=i;
        s+=b;
    }
    if(s%n==0){
        s=s/n;
        for(int i=1;i<=n;i++){
            if(p[i].first==s)c[j++]=p[i].second;
        }
        cout<<j<<endl;
        for(int i=0;i<j;i++)cout<<c[i]<<" ";
    }
    else cout<<0<<endl;
}
