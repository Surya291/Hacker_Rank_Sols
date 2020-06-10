int pairs(int k, vector<int> arr) {
    sort(arr.begin(),arr.end());
int i=0,j=1;
int n = arr.size();
int diff, count=0;

while(i<n){
    diff = arr[j] -arr[i];
    while(diff < k && j<n){
        j++;
        diff = arr[j] - arr[i];
    }

    if(diff == k){
        count++;
    }    
    i++;

}

return count;

}
