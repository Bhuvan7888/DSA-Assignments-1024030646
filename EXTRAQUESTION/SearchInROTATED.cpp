//minimum element in an rotated sorted array

#include<iostream> 
using namespace std;

int Minimum(int arr[] , int n , int target){

    int start = 0;
    int end = n - 1;
    int ans = -1;
    int mid; 

    while(start<=end){

        mid = start + (end-start)/2;

        if(arr[mid]==target){
            return mid;
        }
        else if (arr[mid]>=arr[0]){//left side sorted
            if(arr[start]<=target && arr[mid]>=target){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }  

        else{//Right side sorted   
            if(arr[mid]<=target && arr[end]>target){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }

    }

    return -1;
}

int main() {

    int arr[5] = {6,8,10,2,4};

    int ans = Minimum(arr , 5 , 8);

    cout << "The index of the target element is : " << ans << endl;

    return 0;
}