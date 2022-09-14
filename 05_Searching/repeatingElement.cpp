#include<iostream>
using namespace std;

int repeatingElement(int arr[], int n){
    for (int i = 0; i < n;i++){
        arr[arr[i] % n] += n;
    }
    for (int i = 0; i < n;i++){
        arr[i] /= n;
        if(arr[i] >= 2){
            return i;
        }
    }
    return -1;
}

int repeatingElement2(int arr[],int n){
    int slow = arr[0], fast = arr[0], a;
    do{
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    
    slow = arr[0];
    while(slow!=fast){
        slow = arr[slow];
        fast = arr[fast];
        cout << slow << " " << fast << endl;
    }
    a = slow;
    cout<< slow<<endl;

    do{
        if(arr[slow] == a){
            slow++;
        }
        if(arr[arr[fast]] == a){
            fast++;
        }
        slow = arr[slow];
        fast = arr[arr[fast]];
    } while (slow != fast);
    slow = arr[0];
    
    
    while(slow!=fast){
        if(arr[slow] == a){
            slow++;
        }
        if(arr[fast] == a){
            fast++;
        }
        slow = arr[slow];
        fast = arr[fast];
        // cout << slow << " " << fast << endl;
    }
    cout << slow << endl;
    return -1;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n;i++){
        cin >> arr[i];
    }
    cout << repeatingElement2(arr, n);
}