#include<bits/stdc++.h>
using namespace std;
int n,k;
void solve(){
    int l=1,d=n-l,e;
    do{
        e=d-l;
        for(int i=1;i<e;i++)cout<<d<<" ";
        if(e<1)d=d+abs(e)+1;
        for(int i=max(1,e);i<=n;i++){
            cout<<min(d,n)<<" ",d++;
        }
        cout<<endl;
        l=l+l;
        d=n-l;
        k--;
    }while(e>1);
    while(k--){
        for(int i=1;i<=n;i++)cout<<n<<" ";
        cout<<endl;
    }
}
int main(){
    cin>>n>>k;
    solve();
}