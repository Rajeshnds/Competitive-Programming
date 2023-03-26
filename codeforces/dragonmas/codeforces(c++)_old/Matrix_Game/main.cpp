#include<bits/stdc++.h>
using namespace std;
int t,n,m;
int a[51][51];
string winner(int n,int m){
    set<int>s,c;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
            if(a[i][j]==1)s.insert(i),c.insert(j);
        }
    }
    return min(n-s.size(),m-c.size())&1?"Ashish":"Vivek";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n>>m;
        cout<<winner(n,m);
    }
}
