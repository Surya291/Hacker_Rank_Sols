//https://www.interviewbit.com/problems/square-root-of-integer/

int Solution::sqrt(int n) {
   int l = 0;
   int h = n;
   int k;
   
   while(l<=h){
       k = l + ((h-l)/2);
       
       if(pow(k,2) <= n){
           if(pow(k+1,2) > n){
               return k;
           }
           
           else{
               l = k+1;
           }
    
       }
        else{
            h = k-1;
        }
       
   }
   return -1;
   
}

