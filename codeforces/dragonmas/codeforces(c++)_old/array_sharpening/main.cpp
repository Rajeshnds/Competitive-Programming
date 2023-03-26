#include<bits/stdc++.h>
using namespace std;
int t,n,a[300001],k,f;
int main(){
    for(cin>>t;t--;){
        cin>>n;
        k=n;
        f=-1;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)if(a[i]<i){k=i-1;break;}
        for(int i=n-1;i>=0;i--)if(a[i]<n-i-1){f=i+1;break;}
        cout<<(k>=f?"YES":"NO")<<endl;
    }
}
