#include<bits/stdc++.h>
using namespace std;
int t,n,l,r;
int min_length(int n){
    int m=INT_MAX,d=0;
    while(n--){
        cin>>l>>r;
        m=min(m,r);
        d=max(d,l);
    }
    return max(d-m,0);
}
int main(){
    for(cin>>t;t--;)cin>>n,cout<<min_length(n)<<endl;
}
