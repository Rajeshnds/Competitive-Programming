#include<bits/stdc++.h>
using namespace std;
int n,j,k;
stack<int> st;
pair<int,int> p[200001];
string s;
int main(){
    cin>>n;
    for(int i=0;i<n;i++)cin>>p[i].first,p[i].second=i+1;
    cin>>s;
    sort(p,p+n);
    for(int i=0;i<2*n;i++){
        if(s[i]=='0'){
            cout<<p[j].second<<" ";
            st.push(p[j].second);
            j++;
        }
        else{
           cout<<st.top()<<" ";
           st.pop();
        }
    }
}