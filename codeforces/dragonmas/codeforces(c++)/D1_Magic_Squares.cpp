#include<bits/stdc++.h>
using namespace std;
int n,a[17],s;
map<int,int>m;
void solve(){
    do{
        m.clear();
        m[a[1]+a[2]+a[3]]++;
        m[a[4]+a[5]+a[6]]++;
        m[a[7]+a[8]+a[9]]++;
        m[a[1]+a[5]+a[9]]++;
        m[a[3]+a[5]+a[7]]++;
        m[a[1]+a[4]+a[7]]++;
        m[a[2]+a[5]+a[8]]++;
        m[a[3]+a[6]+a[9]]++;
        if(m.size()==1){
            break;
        }
    }while(next_permutation(a+1,a+n*n+1));
    cout<<s/n<<endl;
    for(int i=1;i<=n*n;i++){
        cout<<a[i]<<" ";
        if(i%n==0)cout<<endl;
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n*n;i++)cin>>a[i],s+=a[i];
    sort(a+1,a+n*n+1);
    solve();
}