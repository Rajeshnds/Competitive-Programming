#include<bits/stdc++.h>
using namespace std;
int n,k,m=INT_MAX;
string s,u,v,t[6]={"RGB","RBG","BGR","BRG","GRB","GBR"};
int main(){
    cin>>n>>s;
    for(int i=0;i<6;i++){
        u=s;
        k=0;
        for(int j=0;j<n;j++){
            if(u[j]!=t[i][j%3])u[j]=t[i][j%3],k++;
        }
        if(k<m)m=k,v=u;
    }
    cout<<m<<endl<<v;
}
