#include<iostream>
using namespace std;
int main(){
int t,n,m,a;
cin>>t;
while(t--){
        int sum=0;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        cin>>a;
        sum+=a;
    }
    cout<<min(m,sum)<<endl;
}
return 0;
}
