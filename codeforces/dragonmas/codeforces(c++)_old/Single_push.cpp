#include<bits/stdc++.h>
using namespace std;
int t,n,b,f,k,d,m;
main(){
    for(cin>>t;t--;){
        f=1;d=0;k=1;
        cin>>n;int a[n+2];
        for(int i=1;i<=n;i++)cin>>a[i];
        for(int i=1;i<=n;i++){
            cin>>b;
            if(b<a[i])k=0;
            if(f==1&&b>a[i])m=b-a[i],f=0,d=i;
            else if(f==0&&b>a[i]){
                if(i!=d+1||b-a[i]!=m)k=0;
                d++;
            }
        }
        cout<<(k?"YES":"NO")<<endl;
    }
}


