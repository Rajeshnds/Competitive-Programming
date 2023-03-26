#include<bits/stdc++.h>
using namespace std;
int t,n,s,k,a,l;
int floors(){
    l=0;
    set<int>set;
    cin>>n>>s>>k;
    while(k--)cin>>a,set.insert(a);
    while(set.count(min(n,s+l))&&set.count(max(1,s-l)))l++;
    return l;
}
int main(){
    for(cin>>t;t--;)cout<<floors()<<endl;
}
