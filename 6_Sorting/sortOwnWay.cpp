#include<iostream>
#include<algorithm>
using namespace std;

struct Point{
    int x, y;
};

bool myComp(Point p1, Point p2){
    return (p1.x > p2.x);
}
int main(){
    int n = 5;
    Point arr[n] = {{2, 3}, {5, 6}, {7, 5}, {1, 9}, {3, 6}};
    sort(arr, arr + n, myComp);
    for(auto i: arr){
        cout << i.x << " " << i.y<<endl;
    }
}