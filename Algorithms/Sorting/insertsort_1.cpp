#include <bits/stdc++.h>
using namespace std;

void insertsort(vector<int>arr){
    int m = arr.size();
    vector<int>::iterator itr;
    int temp,j;
    for (int i=0;i<m;i++){
        temp = arr[i];
        j = i-1;
        while(j>-1 && arr[j] > temp){
            arr[j+1] = arr[j];
            j--;
            for (itr = arr.begin();itr < arr.end();itr++){
                cout << *itr << " ";
            }
            cout <<  endl;

        }
        arr[j+1] = temp;
    }


                for (itr = arr.begin();itr < arr.end();itr++){
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
insertsort(arr);
}
