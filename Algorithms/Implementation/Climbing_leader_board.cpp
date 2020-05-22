// Complete the climbingLeaderboard function below.
vector<int> climbingLeaderboard(vector<int> scores, vector<int> alice) {
    vector<int>rank;
    int i,j,k;
    int prev = scores.size() -1;
    int b = scores[0];
    int r = 1;
    for(i = 0; i < scores.size();i++){
        if(scores[i] != b){
            r++; 
            b = scores[i];
        }
        rank.push_back(r);
        //cout << scores[i] << " " << rank[i] << endl ;
    }

    for (j = 0;j<alice.size();j++){

        if(alice[j]  > scores[0]){
            alice[j] =1;
        }
        
        else{
        for(k = prev;k > -1;k--){

            if(scores[k] >= alice[j]){
                if(scores[k] == alice[j]){
                    alice[j] = rank[k];
                }
                else{
                    alice[j] = rank[k] + 1;
                }
                prev = k;
                break;
                
            }
            
        }
        }
        
    }

return alice;
}
