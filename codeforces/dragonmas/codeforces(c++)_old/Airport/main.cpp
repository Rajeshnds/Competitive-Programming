#include<bits/stdc++.h>
using namespace std;
int n,m,s,d,t;
void tickets(){
    cin>>n>>m;t=n;
    vector<int>u(m),v(m);
    for(int i=0;i<m;i++)cin>>u[i],v[i]=u[i];
    sort(u.rbegin(),u.rend());sort(v.begin(),v.end());
    u[m]=0;
    for(int i=0;i<m;i++){
        if(u[i]>u[i+1]&&n>0)s+=u[i],u[i]--,n--,i=-1;
        if(i==m-1&&n>0)i=-1;
    }
    for(int i=0;i<m;i++){
        if(t>0&&v[i]>0)d+=v[i],v[i]--,t--,i--;
    }
    cout<<s<<" "<<d;
}
int main(){
    tickets();
}
