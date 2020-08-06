// https://www.interviewbit.com/problems/add-binary-strings/

string Solution::addBinary(string A, string B) {
    string ans = "";
    int s1 = min(A.size(),B.size());
    
    string A0,A1;
    
    if(s1==A.size()){
        A0 = B;
        A1 = A;
    }
    
    else{
        A0 = A;
        A1 = B;
    }
    
    reverse(A0.begin(), A0.end()); 
    reverse(A1.begin(),A1.end());


    int i=0;
    
    int car= 0; int d = 0;
    
        
while(i <A1.size()){
        d = (A0[i] + A1[i] + car - 2*'0');
        car = d/2;
        int digit = (d%2) + '0';
        ans+=char(digit);
        

        i++;
    }
    

    while(i < A0.size()){
        d = (A0[i]  + car - '0');
        car = d/2;
        int digit = (d%2) + '0';
        ans+=char(digit);
        i++;
        
    }
    
    if(car == 1){
        car =  car + '0';
        ans+= char(car);
    }
    
    reverse(ans.begin(),ans.end());
    return ans;
}

