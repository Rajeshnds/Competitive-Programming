#include<bits/stdc++.h>
using namespace std;
int n,b[5001],a,s[5001][100001];
int main(){
//    freopen("input.txt","r",stdin);
//    freopen("output.txt","w",stdout);
    cin>>n;
    for(int i=1;i<=2*n;i++){
        cin>>a;
        s[a][b[a]]=i;
        b[a]++;
    }
    for(int i=1;i<=5000;i++){
        if(b[i]%2==1)return cout<<-1,0;
    }
    for(int i=1;i<=5000;i++){
        if(b[i]){
            for(int j=0;j<b[i];j+=2){
                cout<<s[i][j]<<" "<<s[i][j+1]<<endl;
            }
        }
    }
}
