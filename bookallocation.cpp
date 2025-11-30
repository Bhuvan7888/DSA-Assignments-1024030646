//BOOK ALLOCATION PROBLEM , maximum pages t0 minimum students
#include<iostream>
using namespace std;

bool isPossible( int arr[] , int n , int m , int mid){// this one is for page addition and check student count 

    int studentcount = 1;
    int Pagesum = 0;

    for(int i = 0; i<n ; i++){
        if(Pagesum + arr[i] <= mid){// eg - pehle 10 add krke check krra ki if less than mid , and then add the next pages.
            Pagesum += arr[i];
        }
        else{
            studentcount++;
            if( studentcount > m || arr[i] > mid){
                return false;
            }
            Pagesum = arr[i];
            
        }

        
    }
    return true;

}

int bookAllocation(int arr[] , int n , int m ){ // m is the number of students.
    int s = 0;
    int sum = 0;

    for(int i = 0; i<n ; i++){
        sum+= arr[i];
    }

    int e = sum;
    int ans = -1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(isPossible(arr,n,m,mid)){
            ans = mid ;
            e = mid-1;

        }
        else{
            s = mid+1;
        }
        mid = s + (e-s)/2;
        }
        return ans;
}

int main() {

    int arr[4] = {10,20,30,40};
    cout << "the maximum pages are : " << bookAllocation(arr , 4 , 2) << endl;
    
    return 0;
}