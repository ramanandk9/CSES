#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	ll n;
	cin>>n;
	ll fn=0,tn;
	for(ll i=1;i<=n;i++){
		if(i==1) cout<<0<<endl;
		else{
			fn=8*i-16+fn;
			tn=(i*i*(i*i-1))/2-fn;
			cout<<tn<<endl;
		}
	}
	return 0;
 
}
