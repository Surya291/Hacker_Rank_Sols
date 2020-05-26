// Complete the highestValuePalindrome function below.
string highestValuePalindrome(string s, int n, int k) {
    int i,mid;
    vector<int>m;
    vector<int>p;
    vector<int>z_m;

    if(k > n){

    for (i = 0;i<n;i++) {
        s[i]='9';
    }


        return s;
    }

    if(n%2==0){
        mid = n/2;
    }
    
    else{
        mid = (n-1)/2;
    }
for(i=0;i<mid;i++){
    //cout << s[i] << " " << s[n-1-i] << endl;

    if (s[i]!=s[n-i-1]){

    if(s[i] == '9')
        {z_m.push_back(n-1-i);}
    else if(s[n-1-i] == '9')
        {z_m.push_back(i);}

    else{m.push_back(i);}

    }
    else{
        p.push_back(i);
    }
    }
    for (auto j = z_m.begin(); j != z_m.end(); ++j) {
        //cout << *j << " "; 
        s[*j] = '9';
        k--;
    }
    int m_size;
if(m.empty()){
m_size = 0;
}
else{
 m_size = m.size();
}


//cout<< "uhguk"<< endl;

for(i = 0 ; i< m_size;i++){
    if(k <= 0){
        return "-1";
    }
    int j = m[i];
    if(s[j] > s[n-1-j]){
        s[n-1-j] = s[j];
    }
    else{
        s[j] = s[n-1-j];
    }
    k--;
}

    cout << endl;
    cout << " s = ";
    for (auto w = s.begin(); w != s.end(); ++w) {
        cout << *w << " ";
    }
   cout<< endl;
cout<< k<< endl;
    cout << " m = ";
    for (auto w = m.begin(); w != m.end(); ++w) {
        cout << *w << " ";
    }

int x = 0;
int j = 0;


     if(k==1 && (m_size == 0)){
        if(n%2==1){
            s[mid] = '9';
        }
        return s;}


for (x=0;x<mid;x++){
    cout << "k = " << k<<  " ";
    
    if(k==0){
        return s;
    }
/*

    }*/
    if(s[x] !='9'){

        if(  m_size == 0  ){
                    s[x] ='9';
                    s[n-1-x] ='9';
            k = k -2;

        }

        else{
        if(x == m[j] && k > 0){

                    s[x] ='9';
                    s[n-1-x] ='9';

            j++;
            k=k-1;
        }

        else if(x != m[j] && k >1 ){

                        s[x] ='9';
                        s[n-1-x] ='9';

            k = k -2;
        }
        }

    }

}

    cout << endl;
    cout << "2 s = ";
    for (auto w = s.begin(); w != s.end(); ++w) {
        cout << *w << " ";
    }

if(k > 0 && (n%2 == 1)){
    s[mid+1] = '9';
}


return s;



    cout << endl;
    cout << " s = ";
    for (auto j = s.begin(); j != s.end(); ++j) {
        cout << *j << " "; 
    }

    cout << endl;

    cout << " m = ";
    for (auto j = m.begin(); j != m.end(); ++j) {
        cout << *j << " "; 
    }
cout << endl;
cout << " z_m = ";
    for (auto j = z_m.begin(); j != z_m.end(); ++j) {
        cout << *j << " "; 
    }
    cout << endl;

    cout << " p = ";
    for (auto j = p.begin(); j != p.end(); ++j) {
        cout << *j << " "; 
    }
cout << endl;
    cout << "k = "<<k << " m = " << m.size(); 
return "-1";

}
