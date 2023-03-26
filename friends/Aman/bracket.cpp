#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
void solve(){
    int a,cur_seq=0,cur_depth=0;
    int max_depth=0,ind_max_depth=0,max_seq=0,ind_max_seq=0;
    for(int i=1;i<=n;i++){
        cin>>a;
        if(a==1)cur_depth++;
        else cur_depth--;
        if(cur_depth>max_depth)max_depth=cur_depth,ind_max_depth=i;
        cur_seq++;
        if(cur_depth==0){
            if(cur_seq>max_seq){
                max_seq=cur_seq;
                ind_max_seq=i-cur_seq+1;
            }
            cur_seq=0; 
        }
    }
    cout<<max_depth<<" "<<ind_max_depth<<" "<<max_seq<<" "<<ind_max_seq;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    cin>>n;
    solve();
}