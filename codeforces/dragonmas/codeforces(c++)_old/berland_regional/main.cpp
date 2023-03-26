#include<bits/stdc++.h>
using namespace std;
int t,n,a[200001],b[200001],c[200001];
pair<int,int>p[200001];
int main(){
    for(cin>>t;t--;){
        cin>>n;
        for(int i=1;i<=n;i++){
            cin>>c[i];
            a[c[i]]++;
            m=max(m,a[c[i]]);
        }
        for(int i=1;i<=n;i++){
            cin>>b[i];
            p[c[i]]=make_pair(c[i],d[c[i]]);
            d[c[i]]+=b[i];
        }
        for(int i=1;i<=m;i++){
            for(int j=1;j<=n;j++){
                if(a[j]&&a[j]>=i){

                }
            }
        }
    }
}
