#include<bits/stdc++.h>
using namespace std;
int n,q,t,k,d,a[101],f,s;
int main(){
    cin>>n>>q;
    for(int i=1;i<=q;i++){
        f=0;s=0;
        cin>>t>>k>>d;
        for(int j=1;j<=n;j++)s+=(a[j]<t);
        if(s>=k){
            for(int j=1;j<=n;j++){
                if(k&&a[j]<t)k--,f+=j,a[j]=t+d-1;
            }
            cout<<f<<endl;
        }
        else cout<<-1<<endl;
    }
}