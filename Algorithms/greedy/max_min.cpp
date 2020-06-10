int maxMin(int k, vector<int> arr) {
int n = arr.size();
int i,j;
int mini = INT_MAX;
int diff;
sort(arr.begin(),arr.end());
for(i=0;i<=n-k;i++){
    j = i+k-1;
    diff = arr[j] - arr[i];
    if(diff < mini){
        mini = diff;
    }
}
return mini;
}
