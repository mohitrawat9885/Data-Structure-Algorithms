#include <iostream>
#include <queue>

using namespace std;

int main() {
    //populate queue
    queue<int> q;
    for (int i = 0; i < 10; ++i) {
        cout << i << " ";
        q.push(i);
    }
    cout << endl;

    for (int i = 0; i < q.size(); ++i) {
        // int e = move(q.front());
        // cout <<"e = "<<e<<" "<< q.front() << " " << q.back() << endl;
        // //cout << e << " ";
        // q.pop();
        // q.push(move(e));
        int e = q.front();
        q.pop();
        q.push(e);
    }
    cout << endl;
    //print queue
    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
}