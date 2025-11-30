/*
Koko loves to eat bananas. There are n piles of bananas, the ith pile has piles[i] bananas. The guards have gone and will come back in h hours.

Koko can decide her bananas-per-hour eating speed of k.
 Each hour, she chooses some pile of bananas and eats k bananas from that pile. 
 If the pile has less than k bananas, she eats all of them instead and will not eat any more bananas during this hour.

Koko likes to eat slowly but still wants to finish eating all the bananas before the guards return.

Return the minimum integer k such that she can eat all the bananas within h hours.
*/




#include<iostream>
using namespace std;

int minEatingSpeed(int piles[] , int n , int h){//where h is the total time to eat all the bananas

    int start = 0 , end = 0 , mid , ans;

    for(int i = 0 ; i<n ; i++){
        start+=piles[i];
        end = max(end,piles[i]);
    }
    start/=h;

    if(start==0){//start can never be zero
        start = 1;
    }



    while(start<=end){
        mid = start + (end-start)/2;
        // mid amount of banans to consume in 1 hour
        int total_time = 0;


        for(int i = 0 ; i<n ; i++){
            total_time+=piles[i]/mid;
            if(piles[i]%mid){
                total_time++;
            }
        }

        if(total_time>h){
            start=mid+1;
        }

        else{
            ans = mid;
            end = mid-1;
        }
    }
    return ans;

}


int main(){

    int arr[] = {3,6,11,7};

    int ans = minEatingSpeed(arr , 4 , 8);

    cout << ans << endl;

    return 0;
}