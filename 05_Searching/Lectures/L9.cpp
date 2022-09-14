#include<iostream>
using namespace std;

int biSearch(int arr[], int start, int end, int k){
    int mid;
    while(start<=end){
        mid = (start + end) / 2;
        if(arr[mid] == k){
            return mid;
        }
        else if(k > arr[mid]){
            start = mid + 1;
        }
        else if(k < arr[mid]){
            end = mid - 1;
        }
    }
    return -1;
}
int search(int arr[], int k){
    if(k == arr[0]){
        return 0;
    }
    int ind = 1;
    while (1){
        ind *= 2;
        if(k == arr[ind]){
            return ind;
        }
        if(arr[ind] > k){
            return biSearch(arr, ind / 2, ind - 1, k);
        }
    }
}

int main(){
    int arr[20] = {2, 5, 7, 9, 10, 16, 19, 21, 23, 27, 29, 30, 34, 36, 39, 40, 44, 47, 48, 4};
    int k;
    cin >> k;
    cout << search(arr, k);
}