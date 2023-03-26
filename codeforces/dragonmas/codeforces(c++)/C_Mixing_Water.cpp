#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int t,n,k,a[N],h,c;
vector<int>v[N];
string s;
void solve(){
    if(2*t<=h+c)cout<<2;
    else{
        k=(t-h)/(h+c-2*t);
        // if((2*k+3)*abs((k*(h+c)+h)-t*(2*k+1))>(2*k+1)*abs(((k+1)*(h+c)+h)-t*(2*k+3)))
        if(abs((2*k+3)*((2*k+1)*t-(k*(h+c)+h)))>abs((2*k+1)*(((k+1)*(h+c)+h)-t*(2*k+3))))        
        k++;
        cout<<2*k+1;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>n;n--;cout<<endl){
        cin>>h>>c>>t;
        solve();
    }
}