#include<bits/stdc++.h>
using namespace std;
int n,m,a[501],d[501],b[100004],c,f;
int main(){
    cin>>n>>m;
    for(int i=2;i<=100003;i++){
        f=1;
        for(int j=2;j*j<=i;j++){
            if(i%j==0){f=0;break;}
        }
        if(f)b[i]=1;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int k=0;
            for(cin>>c;!b[k+c];k++);
            a[i]+=k;
            d[j]+=k;
        }
    }
    cout<<min(*min_element(a,a+n),*min_element(d,d+m));
}
