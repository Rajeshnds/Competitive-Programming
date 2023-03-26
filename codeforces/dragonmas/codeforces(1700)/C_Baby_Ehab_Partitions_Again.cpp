#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int b[N],t,n,k,a[101],s;
vector<int>v;
set<int>st;
void solve(){
    if(s%2==1||b[s/2]==0){
        cout<<0;
        return;
    }
    int j=1;
    cout<<1<<endl;
    while(true){
        for(int i=1;i<=n;i++){
            if(a[i]%(1<<j)){
                cout<<i;
                return;
            }
        }
        j++;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    b[0]=1;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        for(int j=s;j>=a[i];j--){
            if(b[j-a[i]])b[j]=1;
        }
    }
    solve();
}