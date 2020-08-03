https://www.interviewbit.com/problems/implement-power-function/

int Solution::pow(int x, int n, int d) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
 long long int ans,ans1,ans2; 
 if(x == 0){
     return 0;
 }   
 
 else if(n ==1){
     ans =  (x%d);
 }
 
 else if(n == 0){
     return 1;
 }
 
 else if(n % 2 == 0){
     ans = pow(x,n/2,d);
     ans = (ans%d);
     ans = (ans*ans)%d;
 }
 
 else if(n % 2 ==  1){

     ans1 = pow(x,n-1,d)%d;
     ans2 = x%d;
     ans = ans1*ans2;
     ans = ans%d;
 }
 
if(ans  < 0){
     ans = (ans+d)%d;
 }
 
 return int(ans);
}

