#include<bits/stdc++.h>
using namespace std;
double k,n,vb,vs,a[102],x,y,m=INT_MAX;
int f;
int main(){
    cin>>n>>vb>>vs;
    for(int i=1;i<=n;i++)cin>>a[i];
    cin>>x>>y;
    if(vs>vb)cout<<2;
    else{
        for(int i=2;i<=n;i++){
            k=(sqrt((x-a[i])*(x-a[i])+y*y))/vs+a[i]/vb;
            if(k<m)m=k,f=i;
            else if(k==m){
                if(abs(a[i]-x)<abs(a[f]-x))f=i;
            }
        }
    cout<<f;
    }
}
