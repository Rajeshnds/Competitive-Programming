#include<bits/stdc++.h>
using namespace std;
int n,m,a[1001],b,c;
int dfs(int x){
    return a[x]==x?x:a[x]=dfs(a[x]);
}
int main(){
    cin>>n>>m;
    if(m!=n-1)return cout<<"no",0;
    for(int i=1;i<=n;i++)a[i]=i;
    for(int i=0;i<m;i++){
        cin>>b>>c;
        a[dfs(b)]=dfs(c);
    }
    for(int i=1;i<=n;i++){
        if(dfs(i)!=dfs(1))return cout<<"no",0;
    }
    cout<<"yes";
}