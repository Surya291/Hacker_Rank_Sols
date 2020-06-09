#include <bits/stdc++.h>

using namespace std;


int xs,ys;

bool valid(int x, int y,int N)
{
    if (x < 0 || y < 0 || x >= N || y >= N)
        return false;

    return true;
}


struct Node
{
    // (x, y) represents chess board coordinates
    // dist represent its minimum distance from the source
    int x, y, dist;

    // Node constructor
    Node(int x, int y, int dist = 0): x(x), y(y), dist(dist) {}

    // As we are using struct as a key in a std::set,
    // we need to overload < operator
    // Alternatively we can use std::pair<int, int> as a key
    // to store coordinates of the matrix in the set

    bool operator<(const Node& o) const
    { 
        return x < o.x || (x == o.x && y < o.y);
    }
};

int BFS(int a, int b, int n){
    vector<int>row = {a,b,a,-b,-a,b,-a,-b};
    vector<int>col = {b,a,-b,a,b,-a,-b,-a};

    set<Node> visited;
    queue<Node>q;

   Node start = {0,0};
   Node stop = {n-1,n-1};

    q.push(start);

    while(!q.empty()){
        Node node = q.front();
        q.pop();

        int x = node.x;
        int y = node.y;
        int dist = node.dist;


    if(x == stop.x && y == stop.y){
        return dist;
    }
    if(!visited.count(node)){
         //cout << "node passed" << " ";
        visited.insert(node);

        for(int c = 0;c<8;c++){
             xs = x + row[c];
             ys = y + col[c];
        

        if(valid(xs,ys,n)){
            q.push({xs,ys,dist+1});
           
        }
        }
    }

    }
    return -1;

}





// Complete the knightlOnAChessboard function below.
vector<vector<int>> knightlOnAChessboard(int n) {
vector<vector<int> > result( n-1 , vector<int> (n-1,0));
int i,j;

for(j = 0;j<n-1;j++){
    for (i =j ;i<n-1;i++){
        result[i][j] = BFS(i+1,j+1,n);
        result[j][i] = result[i][j];
    }
}
return result;

}

int main(){
    int n;
    cin>>n;
    vector<vector<int> > result( n-1 , vector<int> (n-1));
    result = knightlOnAChessboard(n);

        for (int i = 0; i < n-1; i++) { 
        for (int j = 0; j < n-1; j++){ 
            cout<< result[i][j]<< " "; 
        } 
        cout<< "\n"; 
    } 


}
