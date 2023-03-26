#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    int a=0;
    while((1<<a)<n)a++;
    cout<<a<<endl;
    for(int i=0;i<a;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            if(j&(1<<i))v.push_back(j);
        }
        cout<<v.size();
        for(auto j:v)cout<<" "<<j+1;
        cout<<endl;
    }
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n;
    solve();
}