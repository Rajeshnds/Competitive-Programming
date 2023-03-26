#include<bits/stdc++.h>
using namespace std;
int n,a[300001],b[300001];
void solve(){
    a[1]=1;
    set<int>s;
    int k=0,x;
    for(int i=1;i<=n;i++){
        scanf("%d",&x);
        if(s.count(x)==1){
            k++;
            b[k]=i;
            a[k+1]=i+1;
            s.clear();
        }
        else s.insert(x);
    }
    if(!k)cout<<-1;
    else{
        b[k]=n;
        printf("%d\n",k);
        for(int i=1;i<=k;i++)printf("%d %d\n",a[i],b[i]);
    }
}
int main(){
    scanf("%d",&n);
    solve();
}