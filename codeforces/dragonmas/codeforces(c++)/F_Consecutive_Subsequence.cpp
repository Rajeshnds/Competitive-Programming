#include<bits/stdc++.h>
using namespace std;
int n,k,ans;
vector<int>v,v2;
map<int,int>m;
void solve(){
    for(int i=n-1;i>=0;i--){
        if(v[i]==k)v2.push_back(i+1),k--;
    }
    reverse(v2.begin(),v2.end());
    cout<<v2.size()<<endl;
    for(auto i:v2)cout<<i<<" ";
}
int main(){
    int a;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
        m[a]=m[a-1]+1;
        if(m[a]>ans)ans=m[a],k=a;
    }
    solve();
}