#include<bits/stdc++.h>
using namespace std;
long long n,k,s,d,e,f;
void solve(){
    if(s>(n-1)*k||s<k)cout<<"NO";
    else if(k==1){cout<<"YES"<<endl<<s+1;}
    else{
        cout<<"YES"<<endl;
        d=s/k;
        e=(s%k)/2;
        f=n-d-1;
        for(int i=1;i<=k-2;i++){
            if(i&1)cout<<d+1+min(f,e)<<" ",e-=min(e,f);
            else cout<<1<<" ";
        }
        if((s%k)&1){
            if(k&1)cout<<1<<" "<<d+1+min(f,e)+1<<" ";
            else{
                cout<<d+1+min(f,e)+1<<" ";
                cout<<2;
            }
        }
        else{
            if(k&1)cout<<1<<" "<<d+1+min(f,e);
            else cout<<d+1+min(f,e)<<" "<<" "<<1;
        }
    }
}
int main(){
    cin>>n>>k>>s;
    solve();
}