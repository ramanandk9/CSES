#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	int n;
	cin>>n;
	if(n==2 || n==3) cout<<"NO SOLUTION"; // for n=2 [(1,2),(2,1)] & n=3 [(1,2,3),(1,3,2),(3,2,1),(3,1,2),...], none feasible
	else{
		for(int i=2;i<=n;i+=2) cout<<i<<' '; // first printing all event numbers
		for(int i=1;i<=n;i+=2) cout<<i<<' '; // printing all odd numbers after even numbers.
	}
 
	return 0;
 
}
