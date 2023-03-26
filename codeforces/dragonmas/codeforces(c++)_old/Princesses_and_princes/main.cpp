#include<bits/stdc++.h>
using namespace std;
void maximize_couple(int n){
    int k,a,l,f=0,b[n+1]={0},i;
    for(i=1;i<=n;i++){
        f=0;
        cin>>k;
    while(k--){
        cin>>a;
        if(b[a]==0&&f==0)b[a]=1,f=1;
    }
    if(f==0)l=i;
    }
    for(i=1;i<=n;i++)if(b[i]==0){cout<<"IMPROVE"<<endl<<l<<" "<<i;break;}
    if(i==n+1)cout<<"OPTIMAL";
}
int main(){
    int t,n;
    for(cin>>t;t--;cout<<endl){
        cin>>n;
            maximize_couple(n);
        }
}
