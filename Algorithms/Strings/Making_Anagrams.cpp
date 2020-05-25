int makingAnagrams(string s1, string s2) {
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end()); 
    vector<int>vec (26,0);
    int i,j,temp;
    for(i=0;i<s1.size();i++){
        temp = s1[i];
        vec[temp%97]++;
    }

    for(j=0;j<s2.size();j++){
        temp = s2[j];
        vec[temp%97]--;
    }
int count = 0;
    for(i = 0;i<26;i++){
        count = count+abs(vec[i]);
    }

return count;
}
