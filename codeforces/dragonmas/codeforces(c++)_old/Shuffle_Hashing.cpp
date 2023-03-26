#include<bits/stdc++.h>
using namespace std;
int t,f;
string p,h,s;
main(){
    for(cin>>t;t--;cout<<endl){
        cin>>p>>h;f=0;
        sort(p.begin(),p.end());
    for(int i=0;i<h.size();i++){
        s="";
    for(int j=i;j<i+p.size();j++)s+=h[j];
        sort(s.begin(),s.end());
        if(s==p){f=1;break;}
    }
    cout<<(f?"YES":"NO");
    }
}
