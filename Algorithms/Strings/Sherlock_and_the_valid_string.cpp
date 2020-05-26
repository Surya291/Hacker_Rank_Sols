// Complete the isValid function below.
string isValid(string s) {
    vector<int> vec(26,0);
    int k;
    int index ;
    int n = s.size();
    if(n==1){
        return "YES";
    }
for (int i = 0;i<n;i++){
    int temp = s[i];
    vec[temp%(97)]++;
}
sort(vec.begin(),vec.end());
for (int j= 0;j<26;j++){
    if(vec[j] != 0){    
         k = vec[j];
         index = j;
        break;
    }
}

if(((vec[24]==k) &&(vec[25] == k || vec[25]==k+1))||(k == 1 &&(vec[index+1] == vec[25]))){
    return "YES";
}
else{
    return "NO";
}
}
