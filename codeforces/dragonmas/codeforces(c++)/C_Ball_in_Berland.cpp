#include<bits/stdc++.h>
using namespace std;
long long d,t,a,b,k,x;
int main(){
    for(cin>>t;t--;){
        cin>>a>>b>>k;
        d=k*(k-1)/2;
        int p=2;
        while(p){
            map<int,int>m;
            for(int i=0;i<k;i++){
                cin>>x;
                d-=m[x]++;
            }
            p--;
        }
        cout<<d<<endl;
    }
}