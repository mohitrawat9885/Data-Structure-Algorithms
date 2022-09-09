#include<iostream>
#include<queue>
using namespace std;

int main(){
    priority_queue<int>pq;
    pq.push(5);
    pq.push(10);
    pq.push(2);
    pq.push(50);
    pq.push(20);

    while (!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    
    cout<<endl;
    
    cout<<pq.size()<<" "<<pq.top();
}