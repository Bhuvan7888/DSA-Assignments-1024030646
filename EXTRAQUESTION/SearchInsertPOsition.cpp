#include<iostream>
#include<vector>

using namespace std;

// SearchIndex function
int SearchIndex(vector<int>&arr , int target){
      
    int start = 0, end = arr.size()-1 , ans = arr.size() , mid;

    while (start <= end) {
        mid = start + (end - start) / 2;

        if (arr[mid] == target) {
            ans = mid;
            break;
        } 
        else if (arr[mid] < target) {
            start = mid + 1;
        }
         else {
            ans = mid;
            end = mid - 1;
        }
    }

    return ans;
}


int main() {
    
    vector<int> my_nums = {1, 3, 5, 6};
   

    int target_value = 4;

    
    int result_index = SearchIndex(my_nums, target_value);
    
    
    cout << "Target: " << target_value << endl;
    cout << "Insertion index: " << result_index << endl;

    return 0;
}