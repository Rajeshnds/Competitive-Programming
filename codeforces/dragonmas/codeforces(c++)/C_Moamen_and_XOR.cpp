#include<bits/stdc++.h>
using namespace std;
int t,n,k,b,a[200010];
const int mo=1000000007;
int get(int x,int y){
	if (y==0) return 1;
	if (x&1){
		return 1ll*(b+1)*get(x,y-1)%mo;
	}
	else{
		return (a[y-1]+1ll*(b-1+mo)%mo*get(x,y-1))%mo;
	}
}
int main(){
	scanf("%d",&t);
	while (t--){
		scanf("%d%d",&n,&k);
		b=1;
		for (int i=0;i<n-1;i++) b=(b<<1)%mo;
		a[0]=1;
		for (int i=0;i<k;i++) a[i+1]=(1ll*a[i]*b*2)%mo; 
		printf("%d\n",get(n,k));
	}
}