//BookAllocation by coder ARMY

#include<iostream>
using namespace std;

int findpages(int A[], int N, int M) {
    // If number of students is more than number of books, allocation is not possible
    if (M > N) {
        return -1;
    }

    int start = 0, end = 0, mid, ans;

    // Initialize the search space
    for (int i = 0; i < N; i++) {
        start = max(start, A[i]); // 'start' is the max pages in a single book
        end += A[i];             // 'end' is the sum of all pages
    }

    while (start <= end) {
        mid = start + (end - start) / 2;

        // Check if this 'mid' is a feasible solution
        int pages = 0, count = 1;
        for (int i = 0; i < N; i++) {
            pages += A[i];
            if (pages > mid) {
                count++;
                pages = A[i];
            }
        }

        if (count <= M) {
            // This is a possible answer, but we want the minimum possible.
            // So, we try to find an even smaller 'mid' in the left half.
            ans = mid;
            end = mid - 1;
        } else {
            // 'mid' is too small, we need to increase it.
            // Search in the right half.
            start = mid + 1; // Corrected line
        }
    }
    return ans;
}

int main(){

    int arr[4] = {22,34,27,45};

    int ans = findpages(arr , 4 , 2);

    cout << ans << endl;



    return 0;
}