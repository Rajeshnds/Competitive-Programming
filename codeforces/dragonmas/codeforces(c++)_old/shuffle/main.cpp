#include<bits/stdc++.h>
using namespace std;
int t,n,x,m,a,b;
int main(){
    for(cin>>t;t--;){
        cin>>n>>x>>m;
        int k=x,l=x;
        for(int i=0;i<m;i++){
            cin>>a>>b;
            if((b>=k&&b<=l)||(a>=k&&a<=l)||(a<=k&&b>=l))
                k=min(k,a),l=max(l,b);
        }
        cout<<l-k+1<<endl;
    }
}
