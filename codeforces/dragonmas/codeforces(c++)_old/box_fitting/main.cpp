#include<bits/stdc++.h>
using namespace std;
int t,n,w,s,k;
int main(){
    for(cin>>t;t--;){
        vector<int> v(30,0);
        s=0;
        cin>>n>>w;
        for(int i=0;i<n;i++)cin>>k,v[log2(k)]++;
        while(n){
            k=w;
            for(int i=29;i>=0;i--){
                while(v[i]){
                    if(k>=1<<i)k-=1<<i,n--,v[i]--;
                    else break;
                }
            }
            s++;
        }
        cout<<s<<endl;
    }
}
