#include<bits/stdc++.h>
using namespace std;
long long t,n,q,a[2],k;
int main(){
    for(cin>>t;t--;){
        cin>>n>>q;
        a[0]=a[1]=0;
        for(int i=0;i<n;i++){
            cin>>k;
            a[0]=max(a[1]-k,a[0]);
            a[1]=max(a[0]+k,a[1]);
        }
        cout<<a[1]<<endl;
    }
}
