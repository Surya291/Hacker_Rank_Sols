ps :
// https://www.hackerrank.com/challenges/ctci-recursive-staircase/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=recursion-backtracking


// Complete the stepPerms function below.
int ways(int n){
    int i,j,k;
    vector<vector<int>> arr(n,vector<int>(3,0));
    for (i = 0;i<n;i++){
        for (j = 0;j < 3; j++){
            if(i == j) { 
                arr[i][j] = 1;
            }
            else if(i < j){
                arr[i][j] = 0;
            }
            else{
                k = i-j-1;
                arr[i][j] = arr[k][0] + arr[k][1] + arr[k][2] ;
            }
            cout << arr[i][j] << " ";

        }
        cout << "\n";
    }
    return arr[n-1][0] + arr[n-1][1] + arr[n-1][2];
}


