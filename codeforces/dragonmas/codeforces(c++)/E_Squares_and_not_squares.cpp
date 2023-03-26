#include<bits/stdc++.h>
using namespace std;
int n,b[200001],c[200001];
void solve(){
    int k=0,m=0,j=0,l=0,a;
    long long ans=0;
    for(int i=0;i<n;i++){
        cin>>a;
        k=sqrt(a);
        if(k*k!=a){
            m=min(1LL*a-(k*k),1LL*(k+1)*(k+1)-a);
            b[j++]=m;
        }
        else c[l++]=a;
    }
    if(l==n/2)cout<<0;
    else if(l<n/2){
        sort(b,b+j);
        for(int i=0;i<n/2-l;i++)ans+=b[i];
        cout<<ans;
    }
    else{
        sort(c,c+l);
        int e=l;
        for(int i=0;i<e-n/2;i++){
            if(c[l-1]==0)ans+=2;
            else ans+=1;
            l--;
        }
        cout<<ans;
    }
}
int main(){
    cin>>n;
    solve();
}