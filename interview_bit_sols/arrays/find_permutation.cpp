//https://www.interviewbit.com/problems/find-permutation/

vector<int> Solution::findPerm(const string A, int B) {
    vector<int> ans(B);
    int i;
    int l = 1,h = B;
for (i = 0;i < B;i ++ ){
    if(A[i] == 'I'){
        ans[i] = l;
        l++;
    }
    
    else{
        ans[i] = h;
        h--;
    }
    
    
}
return ans;
}

