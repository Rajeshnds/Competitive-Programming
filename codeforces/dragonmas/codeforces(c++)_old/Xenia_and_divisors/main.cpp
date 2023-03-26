#include<bits/stdc++.h>
using namespace std;
int n,b[8];
void read(){
    int a;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a,b[a]++;
}
void solve(){
    int ans=0;
    if(!b[1]||b[5]||b[7]||b[6]<b[3]||b[4]>b[2]||b[6]+b[4]!=b[2]+b[3])ans=-1;
    for(int i=1;i<=7;i++){
        if(b[i]>n/3)ans=-1;
    }
    if(ans==-1)cout<<-1;
    else{
        while(b[3]--)cout<<1<<" "<<3<<" "<<6<<endl,b[6]--;
        while(b[2]--)cout<<1<<" "<<2<<" "<<(b[6]>0?6:4)<<endl,b[6]--;
    }
}
int main(){
    read();
    solve();
}
