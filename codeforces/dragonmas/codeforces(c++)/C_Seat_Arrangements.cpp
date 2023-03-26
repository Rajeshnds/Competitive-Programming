#include<bits/stdc++.h>
using namespace std;
long long n,m,k,d,a,b[2001];
string s;
int main(){
    cin>>n>>m>>k;
    for(int i=0;i<n;i++){
        a=0;
        cin>>s;
        for(int j=0;j<m;j++){
            if(s[j]=='.')a++,b[j]++;
            else a=0,b[j]=0;
            if(a>=k)d++;
            if(k>1&&b[j]>=k)d++;
        }
    }
    cout<<d;
}