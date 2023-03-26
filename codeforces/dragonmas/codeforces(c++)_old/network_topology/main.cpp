#include<bits/stdc++.h>
using namespace std;
int n,m,a,b,p[100001],k,l,d;
int main(){
    cin>>n>>m;
    for(int i=1;i<=m;i++){
        cin>>a>>b;
        p[a]++;
        p[b]++;
    }
    for(int i=1;i<=n;i++){
        if(p[i]==1)k++;
        else if(p[i]==2)l++;
        else if(p[i]>2)d++;
    }
    if(k==2&&l>0&&d==0)cout<<"bus topology";
    else if(k==0&&d==0&&l>0)cout<<"ring topology";
    else if(d==1&&k>0&&l==0)cout<<"star topology";
    else cout<<"unknown topology";
}
