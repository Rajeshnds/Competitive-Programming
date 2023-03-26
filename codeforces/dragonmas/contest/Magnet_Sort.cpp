#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N],b[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    if(is_sorted(a,a+n)){
        cout<<0;
    }
    else if(s.find('S')==-1||s.find('N')==-1){
        cout<<-1;
    }
    else{
        int r=-1,n1=0,s1=0,n2=0,s2=0;k=0;
        sort(a,a+n);
        for(int i=0;i<n;i++){
            if(a[i]!=b[i]){
                if(r==-1)r=i;
                else k=i;
            }
        }
        for(int i=0;i<=r;i++){
            if(s[i]=='S')s1=1;
            else n1=1;
        }
        for(int i=k;i<n;i++){
            if(s[i]=='S')s2=1; 
            else n2=1;
        }
        if((s1&&n2)||(n1&&s2)){
            cout<<1;
        }
        else{
            cout<<2;
        }
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    for(cin>>_T;_T--;cout<<endl){
        cin>>n;
        for(int i=0;i<n;i++)cin>>a[i],b[i]=a[i];
        cin>>s;
        solve();
    }   
}