#include<bits/stdc++.h>
using namespace std;
#define pairs pair<int,int>
int n,t1,t2,k,a,b;
vector<pairs>v;
int main(){
    cin>>n>>t1>>t2>>k;
    for(int i=1;i<=n;i++){
        cin>>a>>b;
        pairs x=make_pair(max(a*t1*(100-k)+b*t2*100,
                              b*t1*(100-k)+a*t2*100),-i);
        v.push_back(x);
    }
    sort(v.rbegin(),v.rend());
    for(auto i:v){
        printf("%d %.2f\n",-i.second,(i.first)/100.0);
    }
}
