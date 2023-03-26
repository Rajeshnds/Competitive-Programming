#include<bits/stdc++.h>
using namespace std;
int t,n,k,d,a[200001];
int main(){
    for(cin>>t;t--;){
        map<int,int>m;
        cin>>n>>k>>d;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(i<d)m[a[i]]++;
        }
    int p=m.size();
    int q=p;
    for(int i=d;i<n;i++){
        if(--m[a[i-d]]==0)p--;
        if(++m[a[i]]==1)p++;
        if(p<q)q=p;
    }
    cout<<min(p,q)<<endl;
    }
}