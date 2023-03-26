#include<bits/stdc++.h>
using namespace std;
long long t,n;
void solve(int n){
    long long a=0,s=0,k=0;
    for(int i=0;i<n;i++){
        cin>>a;
        s+=a;
        k^=a;
    }
    cout<<2<<endl<<k<<" "<<s+k<<endl;
}
int main(){
    for(cin>>t;t--;){
        cin>>n;
        solve(n);
    }
}