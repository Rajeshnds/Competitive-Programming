#include<bits/stdc++.h>
using namespace std;
int n,a;
unordered_map<int,int>m;
int f(int i){
    return m[i]?m[i]=f(m[i]):i;
}
void solve(){
    for(int i=1;i<=n;i++){
        scanf("%d",&a);
        printf("%d ",a=f(a));
        m[a]=a+1;
    }
}
int main(){
    cin>>n;
    solve();
}