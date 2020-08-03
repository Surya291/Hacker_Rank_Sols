https://www.interviewbit.com/problems/sorted-insert-position/

int Solution::searchInsert(vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
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
    return l;
}

