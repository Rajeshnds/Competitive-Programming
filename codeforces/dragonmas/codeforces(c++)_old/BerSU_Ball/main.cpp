#include<bits/stdc++.h>
using namespace std;
int n,m,a[102],k,b[101],c;
int max_pair(){
    for(cin>>n;n--;)cin>>c,a[c]++;
    cin>>m;
    for(int i=0;i<m;i++)cin>>b[i];
    sort(b,b+m);
    for(int i=0;i<m;i++){
        if(a[b[i]-1])k++,a[b[i]-1]--;
        else if(a[b[i]])k++,a[b[i]]--;
        else if(a[b[i]+1])k++,a[b[i]+1]--;
    }
    return k;
}
int main(){
    cout<<max_pair();

}
