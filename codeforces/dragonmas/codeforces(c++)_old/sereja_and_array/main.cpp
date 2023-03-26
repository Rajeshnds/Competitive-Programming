#include<bits/stdc++.h>
using namespace std;
int n,m,k[100001],a[100001];
int main(){
    int b,c,d,l=0,p=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    for(int i=1;i<=m;i++){
        cin>>b;
        if(b==1){
            cin>>c>>d;
            a[c]=d-p;
        }
        if(b==2){
            cin>>c;
            p+=c;
        }
        if(b==3){
            cin>>c;
            k[l++]=a[c]+p;
        }
    }
    for(int i=0;i<l;i++)cout<<k[i]<<" ";
}
