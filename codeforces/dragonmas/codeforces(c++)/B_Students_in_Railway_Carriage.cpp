#include<bits/stdc++.h>
using namespace std;
int n,a,b,t;
string s;
int main(){
    cin>>n>>a>>b>>s;
    t=a+b;
    for(int i=0;i<n;){
        if(a<b)swap(a,b);
        if(s[i]=='*')i++;
        else{
            for(;s[i]=='.';i++,swap(a,b)){
                if(a>0)a--;
                else a=0;
            }
        }
    }
    cout<<t-a-b;
}