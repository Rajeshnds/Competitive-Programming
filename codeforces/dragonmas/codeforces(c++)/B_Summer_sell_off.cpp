#include<bits/stdc++.h>
using namespace std;
int n,f,k,l;
long long s;
vector<int>a;
int main(){
    cin>>n>>f;
    for(int i=0;i<n;i++){
        cin>>k>>l;
        s+=min(k,l);
        a.push_back(min(k,l-k));
    }
    sort(a.rbegin(),a.rend());
    for(int i=0;i<f;i++)s+=max(0,a[i]);
    cout<<s;
}