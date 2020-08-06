https://www.interviewbit.com/problems/atoi/

int Solution::atoi(const string A) {
    string ans = "";
    int sign = 1;
    int i = 0;
    long long int final = 0;
    
    if( A[0] == '-'){
        i++;
        sign = -1;
    }
    
    else if(A[0] == '+'){
        i++;
    }
    
    
    while( int(A[i]) <=  '9' && int(A[i]) >= '0'){
        ans+= A[i];
        i++;
    }
    
    
    if(ans.size() >10 ){
        if(sign ==1){
            return INT_MAX;
        }
        
        else{
            return INT_MIN;
        }
    }
    for(i = 0;i < ans.size();i++){
        final = (final * 10) + (ans[i] - '0'); 
    }
    
    //cout <<  "the answer is :" <<'1'  - '0'<< endl;
    final = final*sign;
    
    if(final > INT_MAX){
        return INT_MAX;
    }
    
    else if(final < INT_MIN){
        return INT_MIN;
    }
    
    
    
    return int(final);
}

