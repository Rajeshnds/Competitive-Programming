#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    // vector<int>factor;
    // for(int i=2;i*i<=n;i++){
    //     if(n%i==0){
    //         factor.push_back(i);
    //         if(i*i!=n)factor.push_back(n/i);
    //     }
    // }
    // vector<int>divisor;
    // vector<int>left(1,1);
    // sort(factor.begin(),factor.end());
    // // for(auto i:factor)cout<<i<<" ";cout<<endl;
    // for(auto i:factor){
    //     int k=1,l=0,num=1;
    //     while(n%i==0){
    //         l++;
    //         num*=i;
    //         if(l==k){
    //             divisor.push_back(num);
    //             k++;
    //             l=0;
    //             num=1;
    //         }
    //         n/=i;
    //     }
    //     left[0]=left[0]*num;
    // }
    // if(divisor.size()+(left[0]==1?0:1)<3){
    //     cout<<"NO";
    // }
    // else if(divisor.size()==2&&(divisor[1]==left[0]||divisor[0]==left[0])){
    //     cout<<"NO";
    // }
    // else{
    //     cout<<"YES"<<endl;
    //     cout<<divisor[0]<<" "<<divisor[1]<<" ";
    //     ll third_divisor=1;
    //     for(int i=2;i<divisor.size();i++){
    //         third_divisor*=divisor[i];
    //     }
    //     cout<<third_divisor*left[0];
    // }

    vector<int>v(2,0);
    int j=0;
    for(int i=2;i*i<n&&j<2;i++){
        if(n%i==0){
            v[j++]=i;
            n/=i;
        }
    }
    if(j!=2){
        cout<<"NO";
    }
    else{
        cout<<"YES"<<endl;
        cout<<v[0]<<" "<<v[1]<<" "<<n;
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        solve();
    }
}