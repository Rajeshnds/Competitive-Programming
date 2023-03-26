#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n;
pair<int,int>p[N];
void solve(){
    int m=0,i=0,j=n-1;
    int k=p[i].second,l=p[j].second;
    while(i<=j){
        while(k<l){
            k+=p[++i].second;
        }
        m=max(m,(p[i].first+p[j].first));
        l+=p[--j].second;
    }
    cout<<m;
}
void read_file(){
    freopen("pairup.in","r",stdin);
    freopen("pairup.out","w",stdout);
}
int main(){
    read_file();
    fast;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>p[i].second>>p[i].first;
    }
    sort(p,p+n);
    solve();

}