// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
int i=0;
int k =0;
vector<char>ch = {'h','a','c','k','e','r','r','a','n','k'};
while(i<s.size()){
    if(s[i] == ch[k]){
        k++;
    if(k == ch.size()){
        return "YES";
    }
    }
    i++;
}
return "NO";
}
