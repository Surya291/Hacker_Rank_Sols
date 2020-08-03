//https://www.interviewbit.com/problems/first-missing-integer/

int Solution::firstMissingPositive(vector<int> &A) {
    int n = A.size();
    sort(A.begin(),A.end());
int i;

    while(i<n){
        if(A[i] >= 0 ){
             break;
        }
        i++;
    }
    
    if(i==n){
        return 1;
    }
    else if(A[i] >1){
        return 1;
    }
    
    

    while(i < n-1){
        if(A[i+1] != A[i] + 1){
            return (A[i] + 1);
            
        }
        i++;
        
    }

    int ans = A[n-1] +1;
    return ans;
}

