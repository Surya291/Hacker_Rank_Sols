// Complete the minimumNumber function below.
int minimumNumber(int n, string password) {
    int count = 0;
    // Return the minimum number of characters to make the password strong
    vector<int>c = {0,0,0,0};


    for (int i = 0;i < n;i++){
        int temp = password[i];
        //cout << temp << endl;
        if(temp  >= '0' && temp  <= '9'){
            c[0]++;
        }
         else if (temp  >= 'a' && temp  <= 'z'){
            c[1]++;
        }

         else if (temp  >= 'A' && temp  <= 'Z'){
            c[2]++;
        }
         else if (temp  >= 33 && temp  <= 45){
            c[3]++;
        }
    }
    for(int i=0;i<4;i++){
    cout << c[i] << endl;
    }
    int a = '!';
    int b= '+';
    cout << a << " " << b << endl;

    for (int j = 0; j<4;j++){
        if(c[j] == 0){
            count ++;
        }
    }
    if(count + n < 6){
        count = count + (6-(count + n));
    }
    

    return count;

}
