#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main(int argc, char const *argv[])
{
	string s; // input string
	cin>>s;
	char prev='.'; // initializing prev with '.' because we don't know first character of string.
	int temp=0;
	int max_len=0; // initialize max_length by 0
	for(int i=0;i<s.length();i++){
		if(s[i]!=prev){ // character at this position is different from prev position.
			max_len=max(max_len,temp); // maximizing the answer
			prev=s[i]; // setting the comparision variable to current character
			temp=0;
		}
		temp++; // increase length of current subsequence.
	}
	cout<<max(max_len,temp); // maximizing the answer last time, because it was not done on the last character in for loop.
	return 0;
 
}
