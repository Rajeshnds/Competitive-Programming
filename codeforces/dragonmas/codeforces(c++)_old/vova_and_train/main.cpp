#include<bits/stdc++.h>
using namespace std;
int t,L,v,l,r;
int lantern_count(){
    cin>>L>>v>>l>>r;
    return (l-1)/v+L/v-r/v;
}
int main(){
    for(cin>>t;t--;)cout<<lantern_count()<<endl;
}
