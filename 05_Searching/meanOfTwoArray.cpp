#include<iostream>
#include<climits>
using namespace std;;

double getMean(int a1[], int a2[], int n1, int n2){
    int start = 0, end = n1;
    while(start<=end){
        int i1 = (start+end)/2;
        int i2 = ((n1 + n2 + 1) / 2) - i1;

        int min1 = (i1 == 0) ? INT_MAX : a1[i1];
        int max1 = (i1 == n1)? INT_MIN : a1[i1 - 1];

        int min2 = (i2 == 0) ? INT_MAX : a2[i2];
        int max2 = (i2 == n2) ? INT_MIN : a2[i2 - 1];

        if(max1 <= min2 && max2 <= min1){
            if((n1+n2)%2 == 0){
                return (double)(max(max1, max2) + min(min1,  min2)) / 2;
            }
            else{
                return (double)max(max1, max2);
            }
        }
        else {
            if(max1>min2){
                end = i1 - 1;
            }
            else{
                start = i1 + 1;
            }
        }
    }
}
int main(){
    int n1, n2;
    cout << "Enter size 1 size 2" << endl;
    cin >> n1 >> n2;
    int a1[n1], a2[n2];
    cout << "Enter 1st Array" << endl;
    for (int i = 0; i < n1;i++){
        cin >> a1[i];
    }
    cout << "Enter 2nd Array Size" << endl;
    for (int i = 0; i < n2;i++){
        cin >> a2[i];
    }
    cout << getMean(a1, a2, n1, n2);
}