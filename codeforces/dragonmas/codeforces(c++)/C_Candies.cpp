#include<bits/stdc++.h>
using namespace std;
long long n,l,r,c,sum,k,m;
void solve(){
    l=1;r=n;
    while(l!=r){
        c=n;
        sum=0;
        m=(l+r)/2;
        while(c>0){
            k=min(c,m);
            sum+=k;
            c-=k;
            c-=c/10;
        }
        if(sum*2>=n)r=m;
        else l=m+1;
    }
    cout<<l;
}
int main(){
    cin>>n;
    solve();
}