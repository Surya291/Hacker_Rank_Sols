https://www.interviewbit.com/problems/remove-duplicates-from-sorted-array/

int Solution::removeDuplicates(vector<int> &A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    int i = 0,j = 1,n = A.size(),count = 1;
    vector<int> ans;
    ans.push_back(A[0]);
    while(j < n){
        if(A[i] != A[j]){
            i = j;
            count++ ;
            ans.push_back(A[i]);
        }
        j++;
    }
    A = ans;
    return count;
}

