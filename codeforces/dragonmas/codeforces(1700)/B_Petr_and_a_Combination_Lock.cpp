#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N];
string s;
vector<int>v;
set<int>st;
vector<int>v1,v2;
void solve(){

}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int a;
    cin>>n;
    v1.push_back(0);
    for(int i=0;i<n;i++){
        cin>>a;
        for(int j=0;j<v1.size();j++){
            v2.push_back(v1[j]+a);
            v2.push_back(v1[j]-a);
        }
        v1=v2;
        v2.clear();
    }
    for(int i=0;i<v1.size();i++){
        if(v1[i]%360==0){
            cout<<"YES";
            return 0;
        }
    }
    cout<<"NO";
}