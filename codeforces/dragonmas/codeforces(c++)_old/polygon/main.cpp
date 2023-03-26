#include<bits/stdc++.h>
using namespace std;
int t,f,n;
char c[52][52];
int main(){
    for(cin>>t;t--;){
        cin>>n;
        f=1;
        for(int i=1;i<=n;i++)for(int j=1;j<=n;j++)cin>>c[i][j];
        for(int i=1;i<=n;i++){
            for(int j=1;j<=n;j++){
                if(c[i][j]=='1'){
                    if(c[i][min(n,j+1)]=='0'&&
                            c[min(n,i+1)][j]=='0')f=0;
                }
            }
        }
        cout<<(f?"YES":"NO")<<endl;
    }
}
