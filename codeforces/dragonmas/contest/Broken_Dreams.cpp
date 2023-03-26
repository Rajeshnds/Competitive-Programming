#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;
int _T;
int n,m,x,y,k,a[N];
string s,t;
vector<int>v;
set<int>st;
map<int,int>mp;
pair<int,int>p[N];
void solve(){
    if(k==n){
        cout<<s;
        return;
    }
    st.clear();
    t=""; 
    for(char i='a';i<='z'&&k>1;i++){
        char c;
        int r=0;
        k=-1;
        r=-1;
        for(int j=0;j<n;j++){
            if(!st.count(j)){
                if(s[j]==i){
                    t+=s[j];
                    k=j;
                    st.insert(j);
                }
                else if(r==0)r=i,c=s[j];
            }
        }
        while(abs(r-k)==1){
            for(int j=k+1;j<n;j++){
                if(s[j]==c){
                    t+=s[j];
                    k=j;
                    st.insert(j);
                }
            }
        }
        if(k!=-1){
            char d=i+1;
            while(d<=c){
                for(int j=k+1;j<n;j++){
                    if(!st.count(j)){
                        if(s[j]==c){
                            t+=c;
                            k=j;
                            st.insert(j);
                        }
                    }
                }
                c++;
            }
            x--;
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
        cin>>n>>x>>s;
        solve();
    }   
}