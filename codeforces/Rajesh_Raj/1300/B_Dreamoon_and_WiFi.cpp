#include<bits/stdc++.h>
using namespace std;
# define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
# define ll long long
const int N=2e5+5,mod=1e9+7;const ll inf=1e18;ll _T;
ll n,m,x,y,k,ans,sum,a[N],b[N];
vector<ll>v;
string s,t;
void solve(){
    int final_pos=0,cur_pos=0,ques_mark=0;
    double ans=1;
    for(int i=0;i<s.size();i++){
        if(s[i]=='+')final_pos++;
        else final_pos--;

        if(t[i]=='+')cur_pos++;
        else if(t[i]=='-')cur_pos--;
        else ques_mark++;
    }
    int difference=final_pos-cur_pos;
    if((difference+ques_mark)%2!=0||ques_mark<abs(difference)){
        ans=0;
    }
    else{
        int moves=(ques_mark+abs(difference))/2;
        // c(quest_mark,moves);
        for(int i=0;i<moves;i++){
            ans=ans*(ques_mark-i)/(i+1);
        }
        ans=ans/(1<<ques_mark);
    }
    printf("%.11f",ans);
}
void read_file(){
    freopen("traffic.in","r",stdin);
    freopen("traffic.out","w",stdout);
}
int main(){
    // read_file();
    fast;
    // for(cin>>_T;_T--;cout<<endl)
    cin>>s>>t;
    solve();
}