#include<bits/stdc++.h>
using namespace std;
int n,a[100001][4];
map<int,map<int,int>>m;
void solve(){
    int ans=0,r=0,s=0,g=0;
    for(int i=1;i<=n;i++){
        cin>>a[i][1]>>a[i][2]>>a[i][3];
        sort(a[i]+1,a[i]+3+1);
        if(a[i][1]>ans)ans=a[i][1],g=1,r=i;
        int b=a[i][2],c=a[i][3];
        if(m[b][c]==0)m[b][c]=i;
        else{
            int d=m[b][c];
            if(min(a[i][2],a[i][1]+a[d][1])>ans){
                ans=min(a[i][2],a[i][1]+a[d][1]);
                g=2;r=d;s=i;
            }
            if(a[i][1]>a[d][1])m[b][c]=i;
        }
    }
    cout<<g<<endl;
    if(g==1)cout<<r;
    else cout<<r<<" "<<s;
}
int main(){
    cin>>n;
    solve();
}