#include<bits/stdc++.h>
using namespace std;
long long n,q,x,y,k;
int main(){
    cin>>n>>q;
    for(int i=1;i<=q;i++,cout<<endl){
        cin>>x>>y;
        k=(x-1)*n+y;
        if((x+y)%2==0)cout<<(k+1)/2;
        else cout<<(k+1)/2+(n*n+1)/2;
    }
}
