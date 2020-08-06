//https://www.interviewbit.com/problems/merge-two-sorted-lists-ii/

void Solution::merge(vector<int> &A, vector<int> &B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    
    
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
int i = 0,j = 0, n= B.size(),m = A.size();

vector<int>ans;

while(i < m  ){
    if(A[i] > B[j] && j < n){
        ans.push_back(B[j]);
        j++;
    }
    else{
        ans.push_back(A[i]);
        i++;
    }
}

if(i == m && j< n){
    while(j<n){
        ans.push_back(B[j]);
        j++;
    }
}
A = ans;


    
}

