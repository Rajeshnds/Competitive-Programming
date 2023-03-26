# include <iostream>
using namespace std;
long long i,j,n,d,l,s,a[100009],b[100009];
int main()
{
	cin>>n>>l;
	for (i=0;i<n;i++) cin>>a[i];
	for (i=0;i<n;i++) cin>>b[i];
	for (i=0;i<n;i++)
	{
		d=1;
		s=(b[i]-a[0]+l)%l;
		for (j=0;j<n;j++)
		if ((a[j]+s)%l!=b[(i+j)%n]) { d=0; break; }
		if (d) { cout<<"YES"; return 0;	}
	}
	cout<<"NO";
}