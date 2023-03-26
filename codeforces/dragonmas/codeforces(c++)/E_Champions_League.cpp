#include<bits/stdc++.h>
using namespace std;
int n,x,a,b,c;
struct team{
    string name;
    int rating;
};
team t[65];
vector<team>v[5];
bool compare_rating(team a,team b){
    return a.rating>b.rating;
}
void solve(){
    sort(t+1,t+n+1,compare_rating);
    int m=n/4;
    for(int i=1;i<=n;i++)v[(i-1)/m+1].push_back(t[i]);
    char ch='A';
    for(int i=1;i<=m;i++){
        cout<<"Group "<<ch++<<":"<<endl;
        for(int j=1;j<=4;j++){
            x=(x*a+b)%c;
            int y=x%v[j].size();
            cout<<v[j][y].name<<endl;
            v[j].erase(v[j].begin()+y);
        }
    }
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin>>n>>x>>a>>b>>c;
    for(int i=1;i<=n;i++)cin>>t[i].name>>t[i].rating;
    solve();
}