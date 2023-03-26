#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
ll _T;
ll n,m,x,y,k,a[N];
string s,t;
vector<ll>v;
set<ll>st;
map<ll,ll>mp;
pair<ll,ll>p[N];
stack<pair<int,int>>even,odd;
void print_cell(int k,stack<pair<int,int>>st){
    pair<int,int>p=st.top();
    cout<<k<<" "<<p.first<<" "<<p.second<<endl;
}
void solve(){
    int a;
    for(int i=1;i<=n*n;i++){
        cin>>a;
        if(a==1||a==3){
            if(!even.empty()){
                print_cell(2,even);
                even.pop();
            }
            else if(a==1){
                print_cell(3,odd);
                odd.pop();
            }
            else{
                print_cell(1,odd);
                odd.pop();
            }
        }
        else{
            if(!odd.empty()){
                print_cell(1,odd);
                odd.pop();
            }
            else{
                print_cell(3,even);
                even.pop();
            }
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
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%2==0)even.push({i,j});
            else odd.push({i,j});
        }
    }
    solve();
}