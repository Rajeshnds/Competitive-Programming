#include<bits/stdc++.h>
using namespace std;
int n;
void solve(){
    int l1=0,b1=0,x,y;
    char c;
    for(int i=1;i<=n;i++){
        scanf(" %c%d%d",&c,&x,&y);
        if(y>x)swap(x,y);
        if(c=='+'){
            l1=max(l1,x);
            b1=max(b1,y);
        }
        else{
            if(x>=l1&&y>=b1)printf("\nYES");
            else printf("\nNO");
        }
    }
}
int main(){
    scanf("%d",&n);
    solve();
}