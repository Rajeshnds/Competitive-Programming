#include<bits/stdc++.h>
using namespace std;
int q,n,a[202],k,j;
main(){
    for(cin>>q;q--;cout<<endl){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++){
            k=1;j=i;
            while(a[j]!=i){
                j=a[j];
                k++;
            }
            cout<<k<<" ";
        }
    }
    }
