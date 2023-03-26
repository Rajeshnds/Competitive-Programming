#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
int n,column;
vector<int>row1,row2;
void solve(){
    if(column==1){
        cout<<0;
        return;
    }
    int score=2e9;
    for(int i=1;i<=column;i++){
        // int right=max(row1[column]-row1[i+1],row2[column-1]);
        // int down=max(row1[column]-row1[i],row2[i-1]);
        // score=min(score,min(right,down));
        score=min(score,max(row1[column]-row1[i],row2[i-1]));
    }
    cout<<score;
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>column;
        row1.resize(column+1,0);
        row2.resize(column+1,0);
        for(int i=1;i<=column;i++){
            cin>>row1[i];
            row1[i]+=row1[i-1];
        }
        for(int i=1;i<=column;i++){
            cin>>row2[i];
            row2[i]+=row2[i-1];
        }
        solve();
    }
}