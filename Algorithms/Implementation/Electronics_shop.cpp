int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int max = 0;
    sort(keyboards.begin(), keyboards.end(), greater<int>()); 
    sort(drives.begin(), drives.end()); 

    if(keyboards[keyboards.size() - 1] + drives[0] >  b){
        return -1;
    }
    

for (int i = 0 ;i<keyboards.size();i++){
    for (int j =0;j<drives.size();j++){
        if(keyboards[i] + drives[j] > b){
            break;
        }
        else if (keyboards[i] + drives[j] > max){
            max = keyboards[i] + drives[j];
        }
    }
}
    return max;

}
