#include<iostream>
#include<bitset>
#include<vector>
using namespace std;

int maxAND (int arr[], int N){
    int max = 0, k, l;
    for (int i = 0; i < N-1;i++){
        for (int j = i+1; j <= N;j++){
            // cout << bitset<4>(arr[i])<<" "<<bitset<4>(arr[j])<<" ";
            // cout<<(arr[i]&arr[j])<<endl;
            if((arr[i]&arr[j]) > max){
                max = arr[i] & arr[j];
                k=i;
                l = j;
            }
        }
    }
    cout << "k = " << arr[k] << " l = " << arr[l] << endl;
    return max;
}


int maxAND2(int arr[], int N){
    int bits = 20,a, indi=  0, found = 0;
    while(bits){
        found = 0;
        indi = 0;
        for (int i = 0; i < N;i++){
            if(arr[i]&(1<<bits-1)){
                if(found > 1){
                    arr[indi++] = arr[i];
                    found = 3;
                }
                else
                if(found == 1){
                    arr[indi++] = a;
                    arr[indi++] = arr[i];
                    found = 2;
                }
                else if(found == 0) {
                    a = arr[i];
                    found = 1;
                }
            }
        }
        if(found == 2){
                return (arr[0] & arr[1]);
            }
            else if(found > 2){
                // for (int i = 0; i < indi;i++){
                //     cout << arr[i] << " ";
                // }
                // cout << endl;
                N = indi;
            }
        bits--;
    }
    // for (int i = 0; i < indi;i++){
    //                 cout << arr[i] << " ";
    //             }
        return (arr[0] & arr[1]);
}
int main(){
    int N = 20, x=0;
    // cin>>N;
    int arr[N] = {924, 309, 948, 485, 355 ,643, 635 , 535 ,688, 848, 555, 757, 979, 878, 756, 474, 768, 543, 756, 699};
    // for (int i = 0; i < N;i++){
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < N;i++){
    //     cout << arr[i] << " " << bitset<20>(arr[i]) << endl;
    // }
        cout << maxAND(arr, N) << endl;
    cout<<maxAND2(arr, N);
    // for (int i = 0; i < N;i++){
    //     cout << bitset<4>(arr[i])<<endl;
    // }
    // cout << x;
    // cout << maxAND(arr, N);
    //getANDs();
}