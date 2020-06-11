void minimumLoss(vector<long> price,long &cal, long &large,long m) {
    long n = price.size();
    long i,a,b,mini =10000000 ;
    long temp = 0;
    long ind_a,ind_b;
    
    map<long,long>mymap;
    map<long,long>::iterator itr;
     map<long,long>::iterator d;
    for(i = 0;i < n;i++){
        mymap.insert(make_pair(price[i],i));
    }
 
//cout << mymap.first <<  endl;
    for(itr = mymap.begin();itr != mymap.end() ;itr++){
       
       // cout << (*itr).first << " " << (*itr).second << endl;
    if(itr == mymap.begin()){
        a = INT_MAX;
        b = (*itr).first;

        ind_a = -1;
        ind_b = (*itr).second;
    }
    else{
        a = b;
        b = (*itr).first;

                ind_a = ind_b;
        ind_b = (*itr).second;

    }



   // cout << "a = "<< a << "  b= " << b << endl;

    temp = (b-a+m)%m;
    if(temp < mini && (ind_b < ind_a)){
        mini = temp;
    }

  //cout << a << " " << " " << endl;


    }
    cal = mini;
    large = b;
    

    


}




//////////////////////////////////////////////////////////////////////////////



// Complete the maximumSum function below.
long maximumSum(vector<long> a, long m) {
    long n= a.size();
    long i;
    long sum = 0;
    vector<long> ::iterator itr;
    
    for(i = 0;i<n;i++){
        a[i] = (a[i] + sum)%m;
        sum = a[i];
    }
/*
    for(itr = a.begin();itr !=a.end();itr++){
        cout << *itr << " " ;
    }
    cout << '\n';*/



    long cal = 0;
    long large=0;
    minimumLoss(a,cal,large,m);
    long ans = max(m-cal,large);

    return ans;

}
