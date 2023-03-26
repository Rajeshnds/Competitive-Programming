#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,a[N],b[N];
set<int>s;
void solve(){
    for(int i=0;i<n;i++){
        int k=*s.begin();
        auto it=s.lower_bound(n-a[i]);
        if(it!=s.end()){
            if((a[i]+k)%n<=(a[i]+*it)%n){
                cout<<(a[i]+k)%n<<" ";
                b[k]--;
                if(b[k]==0)s.erase(k);
            }
            else{
                cout<<(a[i]+*it)%n<<" ";
                b[*it]--;
                if(b[*it]==0)s.erase(it);
            }
        }
        else{
            cout<<(a[i]+k)%n<<" ";
            b[k]--;
            if(b[k]==0)s.erase(k);
        }
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int c;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    for(int i=0;i<n;i++){cin>>c;s.insert(c);b[c]++;}
    solve();
}