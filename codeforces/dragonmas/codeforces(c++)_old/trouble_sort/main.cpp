#include<bits/stdc++.h>
using namespace std;
int t,n,a[501],b[501],c[501],k,l,f;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        f=1;
        k=0;
        l=0;
        for(int i=1;i<=n;i++)cin>>a[i],c[i]=a[i];
        sort(c+1,c+n+1);
        for(int i=1;i<=n;i++)cin>>b[i],b[i]==0?k=1:l=1;
        if(k+l!=2){
            for(int i=1;i<=n;i++)if(a[i]!=c[i])f=0;
        }
        cout<<(f?"Yes":"No")<<endl;
    }
}
