#include<bits/stdc++.h>
using namespace std;
long long t,n,m,a[300002],b[300001],k,j;
int main(){
        for(cin>>t;t--;){
            cin>>n>>m;
            k=0;
            j=1;
            for(int i=1;i<=n;i++)cin>>a[i];
            sort(a+1,a+n+1);
            for(int i=1;i<=m;i++)cin>>b[i];
            for(int i=n;i>=1;i--){
                if(b[a[i]]<=b[j])k+=b[a[i]];
                else if(b[a[i]]>b[j])k+=b[j],j++;
            }
            cout<<k<<endl;
        }
}
