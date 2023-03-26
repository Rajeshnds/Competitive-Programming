#include<bits/stdc++.h>
using namespace std;
int n,m,k,l,c,a,b,d,p[1001][1001],e[1001];
int closed_markers(){
    cin>>n>>m;
    while(n--)cin>>a>>b,e[b]++,p[a][b]++;
    while(m--){
        cin>>c>>d;
            if(p[c][d])k++,p[c][d]--;
            if(e[d])l++,e[d]--;
    }
    cout<<l<<" "<<k;
}
int main(){
    closed_markers();
}
