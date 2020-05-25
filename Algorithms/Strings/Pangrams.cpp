// Complete the pangrams function below.
string pangrams(string s) {
    int i;
    int ch;
    int temp;
    int n = s.size();
    vector<int> a(26, 0); 
for (i=0;i<n;i++){
    temp = s[i];
    if(temp >=65&& temp <=90){
        temp = temp+32;
    }

    if (temp <=122&&temp >=97){
    a[(temp)%97]++ ;
    }

}



int j=0;
while(j<a.size()){
    //cout << a[j] <<endl;
    if(a[j] == 0){
        return "not pangram";
    }
    j++;
}
return "pangram";
}
