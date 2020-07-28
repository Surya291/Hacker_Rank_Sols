https://www.hackerrank.com/challenges/ctci-recursive-staircase/problem?h_l=interview&playlist_slugs%5B%5D=interview-preparation-kit&playlist_slugs%5B%5D=recursion-backtracking

#include <bits/stdc++.h>

using namespace std;

// Complete the stepPerms function below.
int ways(int n, int i){
    if(i==n){
        return 1;
    }
    else if(i > n){
        return 0;
    }

    return (ways(n,i+1) + ways(n,i+2) + ways(n,i+3));
}




int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int s;
    cin >> s;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int s_itr = 0; s_itr < s; s_itr++) {
        int n;
        cin >> n;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << long(pow(10,10)) << endl;

        long res = long(ways(n,0)) % long(pow(10,10) + 7) ;

        fout << res << "\n";
    }

    fout.close();

    return 0;
}
