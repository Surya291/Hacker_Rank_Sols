// Complete the superReducedString function below.
string superReducedString(string s) {
    int i,count=1;
    while(count == 1){
        count = 0;
        i=0;
        
    while(i<s.size()){
        //cout << s << endl;

        if(s[i] == s[i+1]){
            s.erase(i,2);
            count++;
            break;
        }
        else{
            i++;
        }
    }
    }
//cout << s << endl;
if(s.size() == 0){
    return "Empty String"; 
}
else{return s;}

}
