int maxm = arr[0];
        for(int i=0;i<n;i++){
            if(arr[i] > maxm){
                maxm = arr[i];
            }
            if(arr[i] <= 0){
                arr[i] = 0;
            }
            else{
                arr[i]--;
            }
        }
        if(maxm <= 0){
            return 1;
        }
        for(int i=0;i<n;i++){
           
            arr[arr[i]%maxm]+=maxm;
        }
        
        for(int i=0;i<n;i++){
            if(arr[i] != 0){
                arr[i]/=maxm;
            }
            if(arr[i] == 0){
                return i+1;
            }
        }
        return maxm+1;
    } 