#include<iostream>
#include<vector>
using namespace std;

int main(){

    vector<int> cells = {1,1,0,1,1,0,0,1};

    bool flag = false;

    int n = 15;
    // int n = 1000000000;
    // n =100;
    n = n%14;

        cout<<n<<endl;
        vector<int> newCells = cells;
        for(int i=1;i<=n+5;i++){
            
            newCells[0] = 0; newCells[7] = 0;
            
            int j = 1;
            while(j <= 6){
                if(cells[j-1] == cells[j+1]) newCells[j] = 1;
                else newCells[j] = 0;
                j++;
            }
            cells = newCells;
            cout<<endl;
            for(int i=0;i<8;i++) cout<<newCells[i]<<" ";
            cout<<endl;
        
        
        }

        cout<<endl;
        for(int i=0;i<8;i++) cout<<newCells[i]<<" ";
}