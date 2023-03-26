#include<bits/stdc++.h>
using namespace std;
long long int c,t,n,a[2001],m,e;
void solve(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;e=0;
        for(int i=0;i<n;i++)cin>>a[i];
        m=*max_element(a,a+n);
        for(int i=0;i<n;i++)if(a[i]==m)e++;
            c=*min_element(a,a+n);
            for(int i=0;i<n;i++){
                if(a[i]!=m)c=c^a[i];
            }
            if(e>1)c=c^m;
            cout<<(c==m?"YES":"NO");
        }
}
int main(){
    solve();
}
