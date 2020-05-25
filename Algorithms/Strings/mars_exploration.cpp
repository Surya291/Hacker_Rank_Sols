// Complete the marsExploration function below.
int marsExploration(string s) {
    vector<char>ch = {'S','O','S'}; 
    int count=0;
for(int i =0;i<s.size();i++){
    int temp = i%3;
    if(s[i]!=ch[temp]){
        count++;
       // cout << s[i] << ch[temp]<< i << endl;
    }
}
return count;

}
