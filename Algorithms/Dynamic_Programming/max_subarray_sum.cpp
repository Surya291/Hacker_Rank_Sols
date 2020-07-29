// https://www.hackerrank.com/challenges/max-array-sum/problem


// Complete the maxSubsetSum function below.
int maxSubsetSum(vector<int> arr) {
int n = arr.size(),i;

vector <int> sum(n+1,0);
sum[n] = INT32_MIN;
cout << "the lowest no. is " << sum[n] << endl; 
for(i = n-1;i >-1;i-- ){
    if(i == n-1){
        sum[i] = arr[i];
    }

    else{
        int temp = max( sum[i+1] , arr[i] + sum[i+2] );
        int temp2 = max( arr[i] , temp);
        sum[i] = max(temp2,sum[i+2]);
    }
    cout << i << " = "<<sum[i] << endl ; 
}
return sum[0];
}
