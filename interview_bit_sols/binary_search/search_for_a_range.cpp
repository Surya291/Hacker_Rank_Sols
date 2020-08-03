https://www.interviewbit.com/problems/search-for-a-range/

vector<int> Solution::searchRange(const vector<int> &A, int B) {
    vector<int>ans(2,-1);
    int l = 0,h = A.size(),state = 0;
    int mid,i;
    while(l <= h){
        mid = l + (h-l)/2;
        if(A[mid] == B){
            state = 1;
            break;
        }
        
        else if(A[mid] > B){
            h = mid -1;
        }
        
        else{
            l = mid+1;
        }
    }
   if(state == 1){
  
    ans[0] = ans[1] = mid;
    for(i = mid;i < A.size();i++){
        if(A[i] != B){
            break;
        }
    }
    ans[1] = i-1;
    
    
        for(i = mid;i >-1;i--){
        if(A[i] != B){
            break;
        }
    }
                ans[0] = i+1;
   }


    //cout << "l = " << l << " h = " << h << endl;
    return ans;
    
}

