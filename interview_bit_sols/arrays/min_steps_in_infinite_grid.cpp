//https://www.interviewbit.com/problems/min-steps-in-infinite-grid/

int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int ans;
int    n = A.size(),i;
int sum = 0;
if(n == 1){
    return sum;
}

int a ,b,mini;
for (i = 1;i < n;i++){
    a = A[i] - A[i-1];
    b = B[i] - B[i-1];
    
    a = abs(a);
    b = abs(b);
    mini = max(a,b);
    
    
    
    sum = sum + mini;
}

//cout << "the sum is :" << sum <<endl;
return abs(sum);
}

