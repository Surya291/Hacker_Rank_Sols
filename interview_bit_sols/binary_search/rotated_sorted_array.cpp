https://www.interviewbit.com/problems/rotated-sorted-array-search/

int Solution::search(const vector<int> &A, int B) {
int i,n= A.size();
int pivot = -1;
int l,h,mid;

for(i = 1;i < n;i++){
    if(A[i] < A[i-1]){
        pivot = i;
        break;
    }
}

if(pivot == -1){
    int l = 0,h = A.size();
    int mid;
    while(l <= h){
        mid = l + (h-l)/2;
        if(A[mid] == B){
            return mid;
        }
        
        else if(A[mid] > B){
            h = mid -1;
        }
        
        else{
            l = mid+1;
        }
    }
    //cout << "l = " << l << " h = " << h << endl;
    return -1;
}


////////////////////////////////////////


else{
    
    ////////////right side ...
    
    
     l = pivot,h = A.size();
    
    while(l <= h){
        mid = l + (h-l)/2;
        if(A[mid] == B){
            return mid;
        }
        
        else if(A[mid] > B){
            h = mid -1;
        }
        
        else{
            l = mid+1;
        }
    }

///// left side...
     l = 0,h = pivot -1;
    
    while(l <= h){
        mid = l + (h-l)/2;
        if(A[mid] == B){
            return mid;
        }
        
        else if(A[mid] > B){
            h = mid -1;
        }
        
        else{
            l = mid+1;
        }
    }
        
    
    return -1;
    
    
}
//return pivot;
}

