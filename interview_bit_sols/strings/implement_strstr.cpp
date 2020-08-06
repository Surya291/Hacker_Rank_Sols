https://www.interviewbit.com/problems/implement-strstr/

int Solution::strStr(const string A, const string B) {
    int i,j,n = A.size(),m = B.size();
    
    for(i = 0;i<n-m+1;i++){
        j=0;
        if(A[i] == B[j]){
            while(j < m){
                if(A[i+j] != B[j]){
                    break;
                }
                
                j++;
            }
            
            if(j == m){
                return i;
            }
        }
    }
    
    return -1;
}

