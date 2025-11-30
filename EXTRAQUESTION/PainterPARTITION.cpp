#include<iostream>
using namespace std;

int PainterAllocation(int A[], int N, int p) {//p is the number of painters
    // If number of Painters is more than number of Walls , allocation is not possible
    if (p > N) {
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

        if (count <= p) {
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

    int arr[5] = {5,10,30,20,15};

    int ans = PainterAllocation(arr , 5 , 3);

    cout << ans << endl;



    return 0;
}