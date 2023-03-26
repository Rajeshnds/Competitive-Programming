#include<bits/stdc++.h>
using namespace std;
int t,n,s,j,a[101],b[101],c[101];
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        j=0;
        s=0;
        for(int i=0;i<n;i++)cin>>a[i],s+=a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            if(b[i]==0){
                c[j++]=a[i];
            }
        }
        sort(c,c+j);
            for(int i=0;i<n;i++){
                if(b[i])cout<<a[i]<<" ";
                else cout<<c[--j]<<" ";
            }
        }
}
