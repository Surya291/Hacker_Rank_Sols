//https://www.interviewbit.com/problems/kth-row-of-pascals-triangle/

vector<int> Solution::getRow(int k) {
    vector<int > row(k+1,0);
    vector<int > temp(k+1,0);
    int i,j;
    row[0] = 1;
    temp[0] =1;
    
    for (i = 1 ;i < k+1;i++){
        for(j = 1;j <= i;j++){
            temp[j] = row[j] + row[j-1];
        }
        row = temp;
        
       
}
 return row;
    
}


