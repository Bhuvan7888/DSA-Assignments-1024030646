//minimum element in an rotated sorted array

#include<iostream> 
using namespace std;

int Minimum(int arr[] , int n ){

    int start = 0;
    int end = n - 1;
    int ans = arr[0];
    int mid; 

    while(start<=end){

        mid = start + (end-start)/2;

        if(arr[mid]>=arr[0]){
            start = mid+1;
        }
        else{
            ans = mid;
            end = mid-1;
        }

    }

    return ans;
}

int main() {

    int arr[5] = {6,8,10,2,4};

    int ans = Minimum(arr , 5);

    cout << "The peak index is : " << ans << endl;

    return 0;
}