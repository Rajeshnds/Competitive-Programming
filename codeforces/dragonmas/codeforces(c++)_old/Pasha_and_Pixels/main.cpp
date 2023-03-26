#include<bits/stdc++.h>
using namespace std;
int n,m,k,c[1002][1002],a,b;
int black_square(){
    cin>>n>>m>>k;
    for(int i=1;i<=k;i++){
        cin>>a>>b;
        c[a][b]=1;
        for(int x=-1;x<2;x+=2){
            for(int y=-1;y<2;y+=2){
                if(c[a+x][b]&&c[a][b+y]&&c[a+x][b+y])
                    return i;
            }
        }
    }
    return 0;
}
int main(){
    cout<<black_square();
}
