#include<bits/stdc++.h>
using namespace std;
#define pairs pair<int,int>
int n,a[101],l,k,s,b[101],c[101],j;
vector<pairs>st;
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>a[i];
        s+=a[i];
        if(a[i])b[j++]=i;
        else c[k++]=i;
    }
    if(a[1]==0||s-j+1<k)return cout<<-1,0;
    for(int i=0;i<j;i++){
        if(i<j-1){
            st.push_back(make_pair(b[i],b[i+1]));
            a[b[i]]--;
        }
        while(a[b[i]]){
            if(k>0){
                st.push_back(make_pair(b[i],c[min(l++,k-1)]));
                a[b[i]]--;
            }
            else break;
        }
    }
    cout<<st.size()<<endl;
    for(auto i:st)cout<<i.first<<" "<<i.second<<endl;
}
