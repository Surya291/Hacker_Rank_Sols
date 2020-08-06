https://www.interviewbit.com/problems/3-sum-zero/

vector<vector<int> > Solution::threeSum(vector<int> &A) {
    sort(A.begin(),A.end());
        int c,i,j,n = A.size();
        
        long  sum,req;
    /*for (i = 0;i < n;i++){
        cout << A[i] << " " ;
    }
    cout << " " <<endl;*/

    
    
    vector<vector<int>> ans;
    vector<int>temp;
    vector<int>prev = {-1,-1,-1};
    
    for (c = 0; c< n-2;c++){
        
                  while(c>0 && A[c] == A[c-1]){
                c++;
            } 
        
        i = c+1;
        j = n-1;
        req = -1*A[c];
        while(i < j){/*
            while(A[i] == A[i+1]){
                i++;
            }
            
            while(A[j] == A[j-1]){
                j--;
            }*/
            
            sum = long(A[i]) + long(A[j]) + long(A[c]);
            if(sum == 0){
                 temp = {A[c], A[i], A[j]};
                if( (temp[0] != prev[0]) || (temp[1] != prev[1]) || (temp[2] != prev[2])){

                    ans.push_back(temp);
                    prev = {A[c], A[i], A[j]};
                }

                
                
                
                i++;
                j--;
            }
            
            else if(sum < 0){
                i++;
            }
            
            else{
                j--;
            }
        }
        

    }
    
    return ans;
    
    
}

