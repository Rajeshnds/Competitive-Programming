#include<bits/stdc++.h>
using namespace std;
int n,a[100001];
void solve(){
    int d,l=0,m=1e9,b,r;
    for(int i=-1;i<=1;i++){
        for(int j=-1;j<=1;j++){
            l=0;
            r=1;
            d=(a[1]+j)-(a[0]+i);
            l+=abs(i);
            for(int k=1;k<n;k++){
                b=abs(a[k]-(a[0]+i+d*k));
                if(b>1){r=0;break;}
                l+=b;
            }
            if(r)m=min(m,l);
        }
    }
    cout<<(m<1e9?m:-1);
}
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
    solve();
}