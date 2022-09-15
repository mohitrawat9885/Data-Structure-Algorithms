#include <iostream>
using namespace std;

string isDivisible(int n){
	if(n == 1) return "No";
	if(n == 2) return "No";
	for(int i=2;i*i<=n;i++){
		if(n%i == 0) return "Yes";
	}
	return "No";
}

int main() {
	int T;
	cin>>T;
	while(T--){
		int N;
		cin>>N;
		cout<<isDivisible(N)<<endl;
	}
	
}