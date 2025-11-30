/*
Given an non negative Integer , return the squareroot of a rounded off to the 
nearest integer . The returned integer should be non negative as well;
*/

#include <iostream>
using namespace std;

int mySqrt(int x) {
    if (x <= 2) {
        return x;
    }

    int start = 1;
    int end = x;
    int ans = 0; 

    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (mid <= x / mid) {
            ans = mid;
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return ans;
}

int main() {
    int numbertotest = 16;
    
    int result = mySqrt(numbertotest);

cout << "The integer square root of " << numbertotest << " is: " << result << endl;

    return 0;
}
