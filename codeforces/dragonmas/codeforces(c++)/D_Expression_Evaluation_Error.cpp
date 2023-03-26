#include<bits/stdc++.h>
using namespace std;
int t,s,n;
vector<int>v;
void solve(int d){
    while(n>1){
        while(true){
            if((s-d)/(n-1)>0){
                v.push_back(d);
                s-=d;
                break;
            }
            d/=10;
        }
        n--;
    }
    v.push_back(s);
    for(auto i:v)cout<<i<<" ";
}
int main(){
    for(cin>>t;t--;cout<<endl){
        cin>>s>>n;
        v.clear();
        string t="1";
        string u=to_string(s);
        for(int i=1;i<u.size();i++){
            t+='0';
        }
        int d=stoi(t);
        solve(d);
    }
}