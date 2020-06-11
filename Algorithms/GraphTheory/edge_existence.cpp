
#include <bits/stdc++.h>

using namespace std;

int main(){
	int n,m,a,b,q; 
	cin >> n;
	cin >> m;

	vector<vector<int>> vec(n, vector<int> (n, 0));

	for (int i = 0;i<m;i++){
		cin >> a >> b;
		vec[a][b] = 1;
		vec[b][a] = 1;

	}

	cin >> q;
	for (int i = 0;i < q;i++){
		cin >> a >> b;
		if(vec[a][b]== 1 || vec[b][a]==1){
			cout << "YES" << endl;
		}
		else{
			cout << "NO"<< endl;

		}
	}


}
