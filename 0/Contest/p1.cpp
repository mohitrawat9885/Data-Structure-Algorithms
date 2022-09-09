#include <iostream>
#include<string>
#include<cmath>
using namespace std;
int main() {
	int T;
	cin>>T;
	while(T--){
	    string s;
	    cin>>s;
	    int sum = 0;
	    for(int i=0;i<s.length();i++){
	        sum += int(s[i]);
	    }
	    sum /= s.length();
	    cout<<sum<<endl;
	}
	return 0;
}