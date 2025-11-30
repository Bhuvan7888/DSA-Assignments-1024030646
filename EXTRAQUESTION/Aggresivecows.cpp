//Aggresive cows problem.  
//check notes for concept (coder army)
#include<iostream>
using namespace std;


void bubbleSort (int arr[] , int n){

    bool swapped = false;//optimisation

    for(int i = 1 ; i < n ; i++){

        //for round 1 to n-1.

        for(int j = 0 ; j < n-i ; j++) { // taki rounds count kr sake tabhi n-1 uske according elements right side jaate rhege
            //process element till n-ith index.
             
            if(arr[j] > arr[j+1]){
                swap(arr[j] , arr[j+1]);

                swapped = true;//optimisation

            }
        }

        if(swapped==false){//optimisation
            break;
        }

    }
}

int aggresiveCows(int stalls[] , int n , int k){//k is the no of aggresive cows , n is the no of elements in the array
    
   int start = 1 , end , mid , ans;
   //sort them in increasing 
   bubbleSort(stalls , n);

   end = stalls[n-1]-stalls[0];

   while(start<=end){

    mid = start + (end - start)/2;
    int count = 1 , pos = stalls[0];

    for(int i = 0 ; i<n ; i++){
        if(pos+mid<=stalls[i]){
            count ++ ;
            pos = stalls[i];
         }
    }

    if(count<k){
        end = mid-1;
    }

    else{
        ans = mid;
        start = mid+1;
    }
    
   }

   return ans;

}

int main() {
    int arr[] = {1,2,4,8,9};

    int ans = aggresiveCows(arr,5,3);
    cout << ans << endl;


    return 0;
}