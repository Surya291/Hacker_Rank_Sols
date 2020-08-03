//https://www.interviewbit.com/problems/maximum-unsorted-subarray/

vector<int> Solution::subUnsort(vector<int> &A) {
    vector<int> S;
    vector <int> ans;
    int i,j;
    S = A;
    sort(S.begin(),S.end());
    int n = A.size();
    for(i = 0;i < n;i++){
        if(A[i] != S[i]){
            break;
        }
    }
    
    for(j = n-1;j>i;j--){
        if(A[j] != S[j]){
            break;
        }
    }
    
    if(i-1 == j){
        ans.push_back(-1);
    }
    
    else{
        ans.push_back(i);
        ans.push_back(j);
        
    }
    return ans;
}

