#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<vector<ll>>v;
string s,t;
void solve(){
    char c;
    vector<int>v,v1,v2;
    stack<int>st;
    int d;
    int k=0,l=0;
    for(int i=1;i<=2*n;i++){
        cin>>c;
        if(c=='-'){
            k--;
            if(k<0){
                cout<<"NO";
                return;
            }
            cin>>d;
            a[i]=d;
            v1.push_back(i);
            // v2.push_back(i);
            l=st.top();
            a[l]=d;
            st.pop();
        }
        else{
            k++;
            v.push_back(i);
            st.push(i);
        }
    }
    int j=0;
    set<int>s;
    for(int i=1;i<=2*n;i++){
        if(i==v1[j]){
            if(a[i]!=*s.begin()){
                cout<<"NO";
                return;
            }
            else{
                j++;
                s.erase(s.begin());
            }
        }
        else{
            s.insert(a[i]);
        }
    }
    cout<<"YES"<<endl;
    for(auto i:v){
        cout<<a[i]<<" ";
    }
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>n;
    solve();
}