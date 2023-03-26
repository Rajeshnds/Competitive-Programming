#include<bits/stdc++.h>
using namespace std;
# define ll long long
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
int t,n,a[105],b[20005],s,f;
void solve(){
    if(b[s]==0){
        cout<<n<<endl;
        for(int i=1;i<=n;i++)cout<<i<<" ";
    }
    else{
        cout<<n-1<<endl;
        for(int i=1;i<=n;i++){
            if(i!=f)cout<<i<<" ";
        }
    }
}
int main(){
    fast;
    b[2]=1;
    b[3]=1;
    int k=4;
    while(k<=20000){
        int r=0;
        for(int i=2;i*i<=k;i++){
            if(k%i==0){
                r=1;
                break;
            }
        }
        if(r==0)b[k]=1;
        k++;
    }   
    for(cin>>t;t--;cout<<endl){
        cin>>n;
        s=0;
        f=0;
        for(int i=1;i<=n;i++){
            cin>>a[i];
            s+=a[i];
            if(a[i]%2==1){
                f=i;
            }
        }
        solve();
    }
}