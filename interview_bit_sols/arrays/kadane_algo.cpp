//https://www.interviewbit.com/problems/max-sum-contiguous-subarray/

// Kadane's_algo

int Solution::maxSubArray(const vector<int> &A) {
    int i,curr = -1000,glo = -1000;
    int n = A.size();
    for(i = 0; i < n;i++){
        curr = max(A[i]+curr,A[i]);
        
        if(glo < curr){
            glo = curr;
        }
    }

    return glo;
}

