//Kth missing positive integer
//check ipad for logic or lec 24 dsa coder army

#include<iostream> 
using namespace std;

int FindtheMissing(int arr[] , int n , int k){

    int start = 0;
    int end = n - 1;
    int ans = n;//just to intilize
    int mid; 

    while(start<=end){
        mid = start + (end-start)/2;

        if(arr[mid]-mid-1>=k){
            ans = mid;
            end = mid-1;
        }

        else{
            start = mid+1;
        }

    }

    return ans+k;
  
}

int main() {

    int arr[6] = {1,2,4,6,8,9};

    int ans = FindtheMissing(arr , 6 , 5);// where k is the kth positive integer

    cout << "The missing kth element is : " << ans << endl;

    return 0;
}

