#include<bits/stdc++.h>
using namespace std;
int t,n,k;
string s;
void solve(){
    if(k&&k<=2){cout<<"NO"<<endl;return;}
    int r=0;
    char u[51][51];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j)u[i][j]='X';
            else u[i][j]='=';
        }
    }
    int l=s.find('2');
    for(int i=0;i<n;i++){
        if(s[i]=='1')continue;
        r=0;
        for(int j=i+1;j<n;j++){
            if(s[j]=='2'){
                u[i][j]='+';
                u[j][i]='-';
                r=1;
                break;
            }
        }
        if(r==0){
            u[i][l]='+';
            u[l][i]='-';
        }
    }
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           cout<<u[i][j];       
        }
        cout<<endl;
    }
}
int main(){
    for(cin>>t;t--;){
        cin>>n>>s;
        k=0;
        for(int i=0;i<n;i++){
            if(s[i]=='2')k++;
        }
        solve();
    }
}