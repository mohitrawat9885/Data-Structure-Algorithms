#include<bits/stdc++.h>
using namespace std;

class MinHeap{
    int *arr;
    int size;
    int capacity;

    public:

    MinHeap(int c){
        arr = new int[c];
        size = 0;
        capacity = c;

    }
    int left(int i){ return (2*i+1);}
    int right(int i){ return (2*i+2);}
    int parent(int i){ return (i-1)/2;}
    void insert(int x){
        if(size == capacity) return;
        int i = size;
        size++;
        arr[i] = x;
        while(i!=0 && arr[i] < arr[parent(i)]){
            swap(arr[i], arr[parent(i)]);
            i = parent(i);
        }
    }

    void MinHeap(int i){
        int lt = left(i), rt = right(i), smallest = i;
        if(lt < size && arr[lt] < arr[i]){
            smallest = lt;
        }
        if(rt < size && arr[rt] < arr[minT]){
            smallest =  rt;
        }
        if(smallest != i){
            swap(arr[smallest], arr[i]);
            MinHeap(smallest);
        }
    }

    void ExtractMin(){
        if(size == 0){
            return INT_MAX;
        }
        if(size == 1){
            size--;
            return arr[0];
        }
        swap(arr[0], arr[size-1]);
        size--;
        MinHeap(0);
        return arr[size];
    }
    void DecreaseKey(int i, int x){
        arr[i] = x;
        while(i != 0 && arr[i] < arr[parent(i)]){
            swap(arr[i], arr[parent(i)]);
            i = i parent(i);
        }
    }
    void buildHeap(){
        for(int i=(size - 2)/2;i>=0;i--){
            MinHeap(i);
        }
    }
};

int main(){
    MinHeap h(11);
    return 0;
}