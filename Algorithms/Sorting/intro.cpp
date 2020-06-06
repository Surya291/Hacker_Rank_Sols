#include <bits/stdc++.h>
using namespace std;


int find(int V, vector<int>arr){
    int j;
    int m =arr.size();
    for( j = 0;j<m;j++){
        if(arr[j] == V){
            break;
        }
    }
    return j;
}


int main(){
int V, n;
 cin >> V;
 cin >> n;
  vector<int>arr(n);
  vector <int>::iterator itr;
 for (int i=0 ; i< n ;i++){
     cin >>  arr[i];
 }

/*
  for (itr = arr.begin() ; itr< arr.end() ;itr++){
     cout << *itr<< endl;
 }*/
int result = find(V,arr);
cout<<result <<  endl;
return 0;
}
