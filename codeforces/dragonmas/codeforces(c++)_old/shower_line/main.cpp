#include<bits/stdc++.h>
using namespace std;
int a[6][6],x[5]={1,2,3,4,5};
void read(){
    for(int i=1;i<=5;i++)for(int j=1;j<=5;j++)cin>>a[i][j];
}
int permute(int b,int c){
    return a[x[b]][x[c]]+a[x[c]][x[b]];
}
int solve(){
    int m=0;
    do{
        m=max(m,permute(0,1)+permute(1,2)+2*permute(2,3)+
                        2*permute(3,4));
    }while(next_permutation(x,x+5));
    cout<<m;
}
int main(){
    read();
    solve();
}
