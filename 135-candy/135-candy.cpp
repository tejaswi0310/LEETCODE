class Solution {
public:
    int candy(vector<int>& A) {
        int N=A.size();
    int B[N];
 
    // Distribute 1 chocolate to each
    for (int i = 0; i < N; i++) {
        B[i] = 1;
    }
 
    // Traverse from left to right
    for (int i = 1; i < N; i++) {
        if (A[i] > A[i - 1])
            B[i] = B[i - 1] + 1;
        else
            B[i] = 1;
    }
 
    // Traverse from right to left
    for (int i = N - 2; i >= 0; i--) {
        if (A[i] > A[i + 1])
            B[i] = max(B[i + 1] + 1, B[i]);
        else
            B[i] = max(B[i], 1);
    }
 
    // Initialize sum
    int sum = 0;
 
    // Find total sum
    for (int i = 0; i < N; i++) {
        sum += B[i];
    }
 
    // Return sum
    return sum;
    }
};