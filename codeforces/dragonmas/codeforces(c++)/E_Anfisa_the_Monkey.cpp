#include<bits/stdc++.h>
using namespace std;
int k,a,b;
string s;
void solve(){
    if(s.size()>k*b||s.size()<k*a){
        cout<<"No solution";
        return;
    }
    int l=0;
    while(k){
        int r=(s.size()-l)/k;
        cout<<s.substr(l,r)<<endl;
        l+=r;
        k--;
    }
}
int main(){
    cin>>k>>a>>b>>s;
    solve();
}