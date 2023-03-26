#include<bits/stdc++.h>
using namespace std;
int n;
vector<int>v[100001];
double f(int i,int p){
    double s=0,k=0;
    for(auto j:v[i]){
        if(j!=p)k++,s+=f(j,i);
    }
    return k?s/k+1:0;
}
void solve(){
    cout<<fixed<<setprecision(10)<<f(1,0);
}
int main(){
    int a,b;
    cin>>n;
    for(int i=1;i<n;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
    }
    solve();
}