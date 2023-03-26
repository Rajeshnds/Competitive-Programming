#include<bits/stdc++.h>
using namespace std;
string s,t,u,v;
int a[4],d,k;
char c;
int main(){
    cin>>s>>t>>u>>v;
    a[0]=s.size()-2;
    a[1]=t.size()-2;
    a[2]=u.size()-2;
    a[3]=v.size()-2;
    for(int i=0;i<4;i++){
        k=0;
        for(int j=0;j<4;j++){
            if(i!=j){
                if(a[i]>=2*a[j])k++;
                if(a[i]*2<=a[j])k--;
            }
        }
        if(k==3||k==-3)d++,c='A'+i;
    }
    if(d==1)cout<<c;
    else cout<<"C";
}