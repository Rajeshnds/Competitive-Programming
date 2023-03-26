#include<bits/stdc++.h>
using namespace std;
int n,m,a,c[205],j,i,k;
map<int,int>mp;
main(){
    for(cin>>n>>m;i<n;i++){
        cin>>a;
        if(mp[a]==0)mp[a]=1,c[j++]=a;
        if(j==m+1){
              j--;
              mp[c[0]]=0;
              for(k=1;k<=m;k++)c[k-1]=c[k];
        }
    }
        cout<<j<<endl;
        for(i=j-1;i>=0;i--)cout<<c[i]<<" ";
}
