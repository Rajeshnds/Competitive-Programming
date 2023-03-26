#include<bits/stdc++.h>
using namespace std;
int n,a[1001];
void solve(){
    for(int i=2;i<=n;i++){
        cout<<"? 1 "<<i<<endl;
        cin>>a[i];
    }
    cout<<"? 2 "<<n<<endl;
    cin>>a[1];
    a[1]=a[n]-a[1];
    cout<<"!";
    for(int i=1;i<=n;i++){
        cout<<" "<<a[i]-a[i-1];
    }
}
int main(){
    cin>>n;
    solve();
}