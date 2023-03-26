#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=1e6+5,mod=1e9+7;
int t;
string s;
vector<int>v;
set<int>st;
void solve(int k){
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    int n;
    int a[N]={0};
    cin>>n;
    vector<int>k(n);
    for(int i=0;i<n;i++){
        cin>>k[i];
        for(int j=1;j*j<=k[i];j++){
            if(k[i]%j==0){
                a[j]++;
                if(k[i]/j!=j)a[k[i]/j]++;
            }
        }
    }
    for(int i=N-5;i>=1;i--){
        if(a[i]>=2)return cout<<i,0;
    }
}

