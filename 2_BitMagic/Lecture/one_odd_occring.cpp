#include<iostream>
using namespace std;

// int oneOddOccring(int *arr, int n){
//     int odd = 0;
//     for (int i = 0; i < n;i++){
//         odd = 0;
//         for (int j = 0; j < n;j++){
//             if(arr[i] == arr[j]){
//                 odd++;
//             }
//         }
//         if(odd%2 != 0){
//             return arr[i];
//         }
//     }
// }

int oneOddOccring2(int *arr, int n){
    int x = arr[0];
    for (int i = 1; i < n; i++)
        x = x ^ arr[i];
    return x;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++)
    {
        cin >> arr[i];
    }
        cout<<oneOddOccring2(arr, n);
}

// # include <iostream>

// using namespace std;



// int fun(int arr[], int n)

// {

//     int x = arr[0];

//     for (int i = 1; i < n; i++)

//         x = x ^ arr[i];

//     return x;

// }



// int main()

// {

//   int arr[] = {9, 12, 2, 11, 10, 9, 12, 10, 9, 11, 2};

//   int n = sizeof(arr)/sizeof(arr[0]);

//   cout << oneOddOccring2(arr, n) << endl;

//   return 0;

// }