#include<bits/stdc++.h>
using namespace std;
int t,n,x;
string rearrange(){
    cin>>n>>x;
    vector<int>v1(n),v2(n);
    for(int i=0;i<n;i++)cin>>v1[i];
    for(int i=0;i<n;i++)cin>>v2[i];
    sort(v1.begin(),v1.end());sort(v2.rbegin(),v2.rend());
    for(int i=0;i<n;i++)if(v1[i]+v2[i]>x)return "NO";
        return "YES";
}
int main(){
    for(cin>>t;t--;)cout<<rearrange()<<endl;
}
