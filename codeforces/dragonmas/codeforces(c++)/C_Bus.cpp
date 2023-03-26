#include<bits/stdc++.h>
using namespace std;
int a,b,f,k;
void solve(){
    int d=a-f,ans=0,p;
    if(b<f)k=0;
    p=b-f;
    for(int i=1;i<=k;i++){
        if(i&1){
            if(i==k){
                if(b<d)k=0;
                if(p<d)ans++;
            }
            else{
                if(b<2*d)k=0;
                if(p<d*2)p=b,ans++;
                p-=(2*d);
            }
        }
        else{
            if(i==k){
                if(b<f)k=0;
                if(p<f)ans++;
            }
            else{
                if(b<2*f)k=0;
                if(p<f*2)p=b,ans++;
                p-=(2*f);
            }
        }
    }
    cout<<(k?ans:-1);
}
int main(){
    cin>>a>>b>>f>>k;
    solve();
}