#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the minimumLoss function below.
int minimumLoss(vector<long> price) {
    long n = price.size();
    long i,a,b,mini =10000000 ;
    long temp = 0;
    long ind_a,ind_b;
    
    map<long,long>mymap;
    map<long,long>::iterator itr;
     map<long,long>::iterator d;
    for(i = 0;i < n;i++){
        mymap.insert(make_pair(price[i],i));
    }
 
//cout << mymap.first <<  endl;
    for(itr = mymap.begin();itr != mymap.end() ;itr++){
       
        cout << (*itr).first << " " << (*itr).second << endl;
    if(itr == mymap.begin()){
        a = INT_MAX;
        b = (*itr).first;

        ind_a = -1;
        ind_b = (*itr).second;
    }
    else{
        a = b;
        b = (*itr).first;

                ind_a = ind_b;
        ind_b = (*itr).second;

    }



    cout << "a = "<< a << "  b= " << b << endl;

    temp = b-a;
    if(temp < mini && (ind_b < ind_a)){
        mini = temp;
    }

  //cout << a << " " << " " << endl;


    }
    
return mini;
    


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string price_temp_temp;
    getline(cin, price_temp_temp);

    vector<string> price_temp = split_string(price_temp_temp);

    vector<long> price(n);

    for (int i = 0; i < n; i++) {
        long price_item = stol(price_temp[i]);

        price[i] = price_item;
    }

    int result = minimumLoss(price);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
