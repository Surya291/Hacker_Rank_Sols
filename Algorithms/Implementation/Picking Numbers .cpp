
int pickingNumbers(vector<int> a) {
    sort(a.begin(),a.end());

    int i = 0;
    int result = 0;
    int b,c_b;
    int c_a = 0;
    while(i < a.size()){
        b = a[i];
        c_b = 0;

        while(a[i] < b+1){
            c_b++;
            i++;
        }
        result = max(c_a+c_b , result);
        //cout << result << " "<< c_b <<  endl;

        if(a[i] == b+1){
            c_a = c_b;
        }

        else{
            c_a = 0;
        }
    }

return result;
}
