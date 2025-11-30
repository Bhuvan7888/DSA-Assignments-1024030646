#include<iostream>
#include<vector>

using namespace std;

// The function to find first and last positions
vector<int> findFirstAndLast(int nums[], int n, int key) {
    int first = -1, last = -1;

    // Search for the FIRST occurrence 
    int start = 0, end = n - 1;
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == key) {
            first = mid;

            end = mid - 1; // Found it, but keep looking left
        } 
        else if (nums[mid] < key) {
            start = mid + 1;
        }
         else {
            end = mid - 1;
        }
    }

    // Search for the LAST occurrence 

    start = 0, end = n - 1;

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (nums[mid] == key) {
            last = mid;
            start = mid + 1; // Found it, but keep looking right
        } 
        else if (nums[mid] < key) {
            start = mid + 1;
        } 
        else {
            end = mid - 1;
        }
    }
    vector<int> a(2);
    a[0] = first;
    a[1] = last;

    // Return both results in a vector
    return a;
}

int main() {
    int nums[8] = {2, 3, 3, 3, 3, 4, 5, 6};
    int key_to_find = 3;

    vector<int> result = findFirstAndLast(nums, 8, key_to_find);

    cout << "First: " << result[0] << ", Last: " << result[1] << endl;

    return 0;
}