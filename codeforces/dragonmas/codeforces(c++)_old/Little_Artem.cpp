#include<bits/stdc++.h>
using namespace std;
int t,n,m;
main(){
    for(cin>>t;t--;){
        cin>>n>>m;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cout<<(i+j?'B':'W');
            }
            cout<<endl;
        }
    }
}
