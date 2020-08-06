https://www.interviewbit.com/problems/longest-common-prefix/

string Solution::longestCommonPrefix(vector<string> &A) {
string ans = "";
int i,j, n = A.size();

string temp =A[0]; 
for(i=1;i < n;i++){
    j = 0;
    
    while( j<min(temp.size() , A[i].size() )  && temp[j] == A[i][j]){
        ans+= temp[j];
        j++;
    }
    
    temp = ans;
    ans = "";
}
ans = temp;
return ans;
    
}

