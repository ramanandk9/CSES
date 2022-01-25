#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

/*
each layer is filled clockwise or anticlockwise. 
solution for anticlock wise filling is just opposite of clockwise solution.
if layer is filled clock wise:-
  1. if layer number is comming from column number then answer is (n-1)*(n-1)-row
  2. else answer is n*n-col+1
opposite is done, when layer is filled anticlock wise

*/
 
int main(int argc, char const *argv[])
{
	int t;
	cin>>t;
	ll x,y,n,val; // x=row numbers, y=column number, n-> nXn matrix, val=value at (x,y) index.
	for(int i=0;i<t;i++){
		cin>>x>>y;
		n=max(x,y);
		if(n%2==0){
			if(x>y){
				cout<<n*n+1-y<<endl; 
			}
			else cout<<(n-1)*(n-1)+x<<endl;
		}
		else{
			if(x>y) cout<<(n-1)*(n-1)+y<<endl;
			else cout<<n*n+1-x<<endl;
		}
	}
	return 0;
 
}
