#include<bits/stdc++.h>
using namespace std;
int n,m,mi,ma,a,k,l;
int main(){
    cin>>n>>m>>mi>>ma;
    for(int i=1;i<=m;i++){
        cin>>a;
        if(a<mi||a>ma)return cout<<"Incorrect",0;
        if(a==mi)k=1;
        if(a==ma)l=1;
    }
    if(k+l==2||(k+l==1&&n-m>=1)||(k+l==0&&n-m>=2))
        cout<<"Correct";
    else cout<<"Incorrect";
}
