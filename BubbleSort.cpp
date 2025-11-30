/*
Bubble sort , done in c programming too , its like comparing first and 2nd element and then checking and making sure that larger one is on the right
if not swap then , then checking 2nd and 3rd element and so on till the largest element is on the right , then running the loop till second last element 
because the largest one is on the right most position sorted in the right place , we have n-1 no of rounds till its fully sorted 



**** selection sort --  in every round the smallest value takes their correct place.
**** bubble sort - in every round the largest value takes their correct place.

*/

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

int main() {

    int arr[6] = {4,6,9,1,66,7};

    bubbleSort(arr , 6);

    for(int i = 0 ; i < 6 ; i++){
        cout << " " << arr[i] ;

    }

    return 0;
}

//TIME COMPLEXITY ---- 1 + 2 + 3 + ..... + n-1 = n(n-1)/2 = *** O(n^2).     VVIP
//SPACE COMPLEXITY ---- O(1) - Constant spaces used(variables) they dont vary.