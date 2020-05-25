// Complete the weightedUniformStrings function below.
vector<string> weightedUniformStrings(string s, vector<int> queries) {
    int i =0;
    int k;
    vector<int> count ;
    int n = s.size();
    int m = queries.size();
    vector<string> str(m,"No");
    int temp;
    while(i<n){
        temp = s[i];
        count.push_back((temp%97)+1);
        k = i+1;
        while(s[k] == s[i]){
        count.push_back((k-i+1)*((temp%97)+1));  
        k++;         
        }

        i = k;

    }

   /* for (auto ir = count.crbegin(); ir != count.crend(); ++ir) 
        cout << *ir << " "; */

        for(int j = 0;j<queries.size();j++){
            for (int k = 0;k<count.size();k++){
                if(queries[j] == count[k]){
                str[j] = "Yes";
                break;
                }
            }
        }
        //cout << *ir << " ";


    
    return str;

}
