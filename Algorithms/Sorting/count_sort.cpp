#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int>arr){
vector<int>count(100,0);
    vector<int>::iterator itr;
int m = arr.size();
int j;
for ( j = 0;j<m;j++){
    count[arr[j]]++;
}

                for (j = 0;j<100;j++){
                    if(count[j] > 0){
                    for (int f = 0;f <count[j];f++ ){
                        cout << j<< " ";
                    }
                    }
            }
            cout <<  endl;


}


int main(){
    int n;
    cin>>n;
    int k;
    vector<int> arr(n);
    for (k=0;k<n;k++){
        cin >>  arr[k];
    }
countsort(arr);
}
