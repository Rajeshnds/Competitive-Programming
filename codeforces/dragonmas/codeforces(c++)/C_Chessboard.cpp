#include<bits/stdc++.h>
using namespace std;
int n,a[4];
char c;
void solve(){
    for(int i=0;i<4;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<n;k++){
                cin>>c;
                if(j%2==k%2&&c=='0')a[i]++;
                if(j%2!=k%2&&c=='1')a[i]++;
            }
        }
    }
    sort(a,a+4);
    cout<<a[0]+a[1]+2*n*n-a[2]-a[3];
}
int main(){
    cin>>n;
    solve();
}