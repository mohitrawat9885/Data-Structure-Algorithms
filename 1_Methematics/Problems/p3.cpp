#include<bits/stdc++.h>

using namespace std;

int main(){

    int a, b, c;
    long double d, root;
    cin >> a >> b >> c;
    root = ((b * b) - (4 * a * c));
    if(root < 0){
        cout << "Imaginary";
    }
    root = (-b + sqrt(root)) / (2 * a);
    cout << root << " ";
    
}