#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main() {
	int T;
	cin>>T;
	while(T--){
	    int N, K;
	    cin>>N>>K;
	    vector<int>v;
	    
	    for(int i=0;i<N;i++){
	        int d;
	        cin>>d;
	
	        v.push_back(d);
	    }
	    sort(v.begin(), v.end());
	    for(auto k: v){
	        cout<<k<<" ";
	    }
	   
	    vector<int>v2;
	    for(int i=0;i<N-1;i++){
	        int d = abs(v[i+1] - v[i]);
	        v2.push_back(d);
	    }
	    cout<<endl;
	    sort(v2.begin(), v2.end());
        for(auto p: v2){
            cout << p << " ";
        }
        cout << endl;
        cout<<v2[K-1]<<" ";
	    // v.clear();
        // v2.clear();
    }
	return 0;
}