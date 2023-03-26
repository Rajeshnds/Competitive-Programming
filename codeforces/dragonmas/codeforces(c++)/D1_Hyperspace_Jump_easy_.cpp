#include<bits/stdc++.h>
using namespace std;
double d[200001];
int n;
map<double,int>m;
void solve(){
    for(int i=1;i<=n;i++)printf("%d ",m[d[i]]);
}
int main(){
    int a,b,c;
    scanf("%d\n",&n);
    for(int i=1;i<=n;i++){
        scanf("(%d+%d)/%d\n",&a,&b,&c);
        d[i]=(double)(a+b)/c;
        m[d[i]]++;
    }
    solve();
}

