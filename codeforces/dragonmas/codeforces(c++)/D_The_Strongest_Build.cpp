#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<vector<int>>slots;
vector<int>v,ind;
set<vector<int>>index;
void solve(){
    long long sum=0,ans=0,temp=0;
    if(index.count(ind)){
        for(auto i:index){
            int j=0;
            sum=0;
            for(auto k:i){
                sum+=slots[j][k];
                j++;
            }
            if(sum<=ans)continue;
            j=0;
            for(auto &k:i){
                if(k>0){
                    k--;
                    if(!index.count(i)){
                        temp=sum+slots[j][k]-slots[j][k+1];
                        if(temp>ans){
                            ans=temp;
                            ind=i;
                        }
                    }
                    k++;
                }
                j++;
            }
        }
    }
    for(auto i:ind)cout<<i+1<<" ";
}
int main(){
    int k,l;
    cin>>n;
    slots.assign(n,{});
    for(int i=0;i<n;i++){
        cin>>k;
        for(int j=0;j<k;j++){
            cin>>l;
            slots[i].push_back(l);
        }
        ind.push_back(k-1);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        v.clear();
        for(int j=0;j<n;j++){
            cin>>l;
            v.push_back(l-1);
        }
        index.insert(v);
    }
    solve();
}