#include<bits/stdc++.h>
using namespace std;
int n,s;
pair<double,int>p[1001];
int main(){
    int a,b,c;
    cin>>n>>s;
    for(int i=0;i<n;i++){
        cin>>a>>b>>c;
        p[i].first=sqrt(a*a+b*b);p[i].second=c;
    }
    sort(p,p+n);
    for(int i=0;i<n;i++){
        s+=p[i].second;
        if(s>=1000000){
            return cout<<p[i].first,0;
            break;
        }
    }
    cout<<-1;
}
