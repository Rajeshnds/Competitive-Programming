#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=500001;
// int t,n,a[N],b[N];
ll t,n;
vector<int>v;
void solve(){
    if(n==0)cout<<-1<<" "<<1;
    else if(n>0){
        cout<<-(n-1)<<" "<<n;
    }
    else{
        cout<<n<<" "<<(-n)-1;
    }
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        solve();
    }
}