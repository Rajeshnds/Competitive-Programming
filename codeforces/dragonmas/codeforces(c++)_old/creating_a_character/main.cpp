#include<bits/stdc++.h>
using namespace std;
int t,s,i,e;
int main(){
    for(cin>>t;t--;){
        cin>>s>>i>>e;
        int k=max(0,(i+e-s+2)/2);
        cout<<max(0,e-k+1)<<endl;
    }
}
