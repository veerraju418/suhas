#include<bits/stdc++.h>
using namespace std;
int main() {
	int res,num,pos;
	cin>>num>>pos;
	res = (num|((pos-1)<<1));
	cout<<res;
}
