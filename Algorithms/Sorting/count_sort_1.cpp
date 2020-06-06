#include <bits/stdc++.h>
using namespace std;

void countsort(vector<int>arr){
vector<int>count(100,0);
    vector<int>::iterator itr;
int m = arr.size();
for (int j = 0;j<m;j++){
    count[arr[j]]++;
}

                for (itr = count.begin();itr < count.end();itr++){
                cout << *itr << " ";
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
