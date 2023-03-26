#include<bits/stdc++.h>
using namespace std;
int n,m,k=INT_MAX,l,e=INT_MAX,a,b,c,d,f;
int best_period(){
    cout<<k;
    cin>>n;
    for(int i=0;i<n;i++)cin>>a>>b,f=max(f,a),k=min(k,b);
    cin>>m;
    for(int i=0;i<m;i++)cin>>c>>d,l=max(l,c),e=min(e,d);
    return max(0,max(f-e,l-k));
}
int main(){
    cout<<best_period();
}
