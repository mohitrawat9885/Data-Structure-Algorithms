#include<iostream>
using namespace std;

void TOH(int n, int from, int to, int aux){
    if(n == 1){
        cout << "1 Move disk 1 from " << from << " to " << to<<endl;
        return;
    }
    TOH(n - 1, from, to, aux);
    cout << "2 Move disk "<<n<<" from " << from << " to " << to<<endl;
    TOH(n - 1, aux, from, to);
}

// void TOH2(int n, int from, int to, int aux){
//     if(n == 1){
//         cout << "1 Move 1 from " << from << " to " << aux<<endl;
//         return;
//     }
//     TOH(n - 1, from, aux, to);
//     cout << "2 Move "<<n<<" from " << from << " to " << aux<<endl;
//     TOH(n - 1, to, from, aux);
// }


int main(){
    int n;
    cin >> n;
    TOH(n, 1, 3, 2);
}