vector<int> closestNumbers(vector<int> arr) {
    int n = arr.size(); 
    vector<int> temp;
    vector<int>diff(n-1);
    sort(arr.begin(),arr.end());
    
    for(int i=1;i<n;i++){
        diff[i-1] = arr[i] - arr[i-1];
    }
int mini = *min_element(diff.begin(), diff.end()); 
cout<<mini<<endl;
    for (int j = 0;j< n-1;j++){
        if(diff[j]==mini){
            temp.push_back(arr[j]);
            temp.push_back(arr[j+1]);
        }
    }
    return temp;

}
