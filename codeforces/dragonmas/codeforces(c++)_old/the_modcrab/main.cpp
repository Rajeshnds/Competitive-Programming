#include<bits/stdc++.h>
using namespace std;
int h1,a1,c1,h2,a2;
void read(){
    cin>>h1>>a1>>c1>>h2>>a2;
}
void solve(){
    int k=0;
    string s="";
    while(h2>0){
        if(h1>a2||a1>=h2)k++,s+="STRIKE\n",h2-=a1,h1-=a2;
        else k++,s+="HEAL\n",h1=h1-a2+c1;
    }
    cout<<k<<endl<<s;
}
int main(){
    read();
    solve();
}
