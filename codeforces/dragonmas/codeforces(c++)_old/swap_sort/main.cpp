#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pairs;
int n,a[3001],b[3001];
void read(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>a[i];
}
void solve(){
    int k=0;
    cout<<n<<endl;
   for(int i=0;i<n;i++){
       k=i;
       for(int j=i;j<n;j++){
           if(a[j]<a[k])
               k=j;
       }
       swap(a[i],a[k]);
       cout<<i<<" "<<k<<endl;
   }
}
int main(){
    read();
    solve();
}
