#include<bits/stdc++.h>
using namespace std;
int n,m;
void alternate(){
    cin>>n>>m;
    if(n>=m){
        for(int i=1;i<=m;i++)cout<<"BG";
        for(int i=1;i<=n-m;i++)cout<<'B';
    }
    else{
        for(int i=1;i<=n;i++)cout<<"GB";
        for(int i=1;i<=m-n;i++)cout<<'G';
    }
}
int main(){
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    alternate();

}
