#include<bits/stdc++.h>
using namespace std;
int n,x,y,l[101],b[101],ans;
bool dimension(int l1,int l2,int b1,int b2){
    if((l1+l2<=x&&max(b1,b2)<=y)||
    (l1+l2<=y&&max(b1,b2)<=x)){
        return true;
    }
    return false;
}
void solve(){
    int ans=0;
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            if(dimension(l[i],b[j],b[i],l[j])){
                ans=max(ans,l[i]*b[i]+l[j]*b[j]);
            }
            else if(dimension(l[j],b[i],b[j],l[i])){
                ans=max(ans,l[i]*b[i]+l[j]*b[j]);
            }
            else if(dimension(l[i],l[j],b[i],b[j])){
                ans=max(ans,l[i]*b[i]+l[j]*b[j]);
            }
            else if(dimension(b[i],b[j],l[i],l[j])){
                ans=max(ans,l[i]*b[i]+l[j]*b[j]);
            }
        }
    }
    cout<<ans;
}
int main(){
    cin>>n>>x>>y;
    if(y>x)swap(x,y);
    for(int i=1;i<=n;i++){
        cin>>l[i]>>b[i];
        if(b[i]>l[i])swap(l[i],b[i]);
    }
    solve();
}