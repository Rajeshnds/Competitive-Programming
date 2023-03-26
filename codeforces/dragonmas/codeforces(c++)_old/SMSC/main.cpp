#include<bits/stdc++.h>
using namespace std;
int n,t,c,u,m,s,T;
int max_message(){
    cin>>n>>t>>c;n--;
    T+=t+c;
    s+=c;m=s;
    while(n--){
        cin>>u>>c;
        T=max(T+c,u+c);
        s=max(0,s-(u-t))+c;
        m=max(m,s);
        t=u;
    }
    cout<<T<<" "<<m;
}
int main(){
    max_message();
}
