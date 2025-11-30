/* 
SELECTION SORT - different rounds/passes > every round me smallest element laake right jaga pe place kr dete hai. 
*/

#include<iostream>
using namespace std;

void selectionSort( int arr[] , int n){
 
    for(int i = 0 ; i < n-1 ; i++ ){// till n-1 because et the end last element will be automatically sorted;

        int minIndex = i;

        for(int j = i+1 ; j < n ; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex] , arr[i]);
    }

}

int main () {
    int arr[6] = {4,9,7,2,1,8};

    selectionSort(arr , 6);

    for(int i = 0 ; i < 6 ; i++){
        cout << arr[i] ;
    }



    return 0;
}

/* 
for(int i = 0 ; i < n-1 ; i++){
int minIndex = i
for(int j = i+1 ; j < n , j++){
if(arr[j] < arr[minindex]){
minindex = j
}
}
swap(arr[minindex], arr[i]);
}
*/