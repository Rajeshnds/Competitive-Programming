#include<bits/stdc++.h>
using namespace std;
int t,n,a[100001];
int main(){
    for(cin>>t;t--;){
        cin>>n;
        for(int i=1;i<=n;i++)cin>>a[i];
        cout<<n/2<<endl;
        for(int i=1;i<n;i+=2,cout<<endl){
            if(a[i]<=a[i+1]){
               cout<<i<<" "<<i+1<<" "<<a[i]<<" "<<1000000007;
            }
            else{
                cout<<i<<" "<<i+1<<" "<<a[i+1]<<" "<<1000000007;
            }
        }
    }
}
