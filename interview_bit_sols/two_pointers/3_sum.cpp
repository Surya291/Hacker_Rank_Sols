https://www.interviewbit.com/problems/3-sum/

int Solution::threeSumClosest(vector<int> &A, int B) {
    
    sort(A.begin(),A.end());
    int c, i, j,mini = INT_MAX, n = A.size(),ans;
    long long int sum = A[0] + A[1] + A[2],diff,req
    
    for(c = 0; c< n-2;c++){
        i = c+1, j = n-1;
        while(i<j){
            sum = A[i] + A[j] + A[c];
            diff = abs(sum - B);
            
            if(diff == 0){
                return B;
            }
            
            req = B- A[c];
            
            if(A[i] + A[j] < req){
                i++;
            }
            
            else if (A[i] + A[j] >= req){
                j--;
            }
            
        }
        
        
        if(diff <= mini){
            mini = diff;
            ans= sum;
        }
    }
    
    return ans;
}

