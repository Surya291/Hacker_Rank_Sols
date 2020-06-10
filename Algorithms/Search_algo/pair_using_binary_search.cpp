#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

/*
bool check(int b,vector<int> arr ){
int len = arr.size();
int mid = arr[int(len/2)];
int end = arr[len-1];


if(b > end){
    return false;
}

else if(b >= mid && b <=end){
    for(int j = int(len/2);j < len;j++){
        if(arr[j] == b){
            return true;
        }
    }
}

else{

        for(int j =0 ;j < int(len/2);j++){
        if(arr[j] == b){
            return true;
        }
    }

}
return false;

}

*/

/////////////////////////////////////////////////////////////////////////////////////

bool check(int i, int l , int r, vector<int> arr , int x){
    if (r>=l){
    int mid = (l+r)/2;

    if(x == arr[mid]){
        return true;
    }

    else if(arr[mid] < x){
        return check(i,mid+1,r,arr,x);
    }

    else if (arr[mid] > x){
        return check(i, i,mid-1,arr,x);
    }
    }

    return false;
}
///////////////////////////////////////////////////////////////////////////////////////



// Complete the pairs function below.
int pairs(int k, vector<int> arr) {
    int pair = 0;
    sort (arr.begin(),arr.end());
    int n  = arr.size();
for(int l = 0;l < n;l++){
    int b = arr[l];
    b = b+k;
    int diff = arr[l+1] - arr[l];
if(diff <= k &&check(l,0,n-1,arr,b)){

    pair++;

}
    
}
return pair;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string nk_temp;
    getline(cin, nk_temp);

    vector<string> nk = split_string(nk_temp);

    int n = stoi(nk[0]);

    int k = stoi(nk[1]);

    string arr_temp_temp;
    getline(cin, arr_temp_temp);

    vector<string> arr_temp = split_string(arr_temp_temp);

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        int arr_item = stoi(arr_temp[i]);

        arr[i] = arr_item;
    }

    int result = pairs(k, arr);

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
