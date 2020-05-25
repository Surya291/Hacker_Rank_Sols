// Complete the camelcase function below.
int camelcase(string s) {
    int count = 0;
for(int i = 0;i < s.size();i++){
    int c = s[i];
    if(c < 91 && c > 59){
        count++;
    }
}
return count + 1;
}
