#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[5],b[5],m;
string s;
vector<int>v;
set<int>st;
int query(int i,int j,int k){
    int r;
    cout<<"? "<<i<<" "<<j<<" "<<k<<endl;
    cin>>r;
    m=max(m,r);
    return r;
}
void solve(){   
    a[1]=1;a[2]=2;a[3]=3;a[4]=4;
    for(int i=4;i<=n+1;i+=2){
        m=0;
        b[1]=query(a[2],a[3],a[4]);
        b[2]=query(a[1],a[3],a[4]);
        b[3]=query(a[1],a[2],a[4]);
        b[4]=query(a[1],a[2],a[3]);
        k=2;
        st.clear();
        while(k--){
            for(int j=1;j<=4;j++){
                if(!st.count(j)&&b[j]==m){
                    st.insert(j);
                    break;
                }
            }
        }
        k=1;
        for(int j=1;j<=4;j++){
            if(!st.count(j))a[k++]=a[j];
        }
        a[3]=i+1;
        a[4]=i+2;
        if(n%2==1&&i==n-1){
            if(a[1]!=1&&a[2]!=1)a[4]=1;
            else if(a[1]!=2&&a[2]!=2)a[4]=2;
            else a[4]=3;
        }
    }
    cout<<"!"<<" "<<a[1]<<" "<<a[2]<<endl;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>t;t--;){
        cin>>n;
        solve();
    }
}