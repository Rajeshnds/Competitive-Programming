#include<bits/stdc++.h>
using namespace std;
int n,a[200005],m,mx,b[200005],j,f=1;
void solve(){
    cout<<n-mx<<endl;
    for(int i=1;i<=n;i++){
        if(a[i]==m&&f){
            j=i;
            while(j>1){
                cout<<(a[j-1]>m?2:1)<<" "<<j-1<<" "<<j<<endl;
                j--;
            }
            f=0;
        }
        if(a[i]!=m&&!f){
            cout<<(a[i]>m?2:1)<<" "<<i<<" "<<i-1<<endl;
        }
    }
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        b[a[i]]++;
        if(b[a[i]]>mx)mx=b[a[i]],m=a[i];
    }    
    solve();
}