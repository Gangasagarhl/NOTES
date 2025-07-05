#include<bits/stdc++.h>
using namespace std; 

int merge(vector<int> &b,  int low, int mid, int high){

    vector<int> c;
    int i=low, j=mid+1;
    int cnt=0; 

    while(i<=mid && j<= high)
    {
        if(b[i]<=b[j]){
            c.push_back(b[i++]); 
        }
        else{
            cnt+= (mid -i+1); 
            c.push_back(b[j++]); 
        }
    }

    while(i<=mid){
        c.push_back(b[i++]); 
    }
    while(j<=high){
         c.push_back(b[j++]);
    }

    for(int k=0;k<c.size();k++){

        b[low+k] = c[k];
    }

    return cnt; 


}

int  mergesort(vector<int> &b, int low, int high){
   

    if(low>=high) return 0;
     int cnt= 0; 
    int mid =(low+high)/2;
    cnt+=mergesort(b, low, mid);
    cnt+=mergesort(b, mid +1, high);
    cnt+= merge(b,low, mid, high); 
    return cnt;
    
}

int  main(){
    vector<int> a={1,10,8,2,3,5,-1}, b=a, c=b;
    sort(b.begin(), b.end()); 
    cout<<"\n Sorted using library calls:  "; 
    for(auto i: b){
        cout<<i<<" "; 
    }

    int m = mergesort(c, 0, c.size()-1); 
    cout<<"\n Sorted using custom merge sort :  "; 
    for(auto i: c){
        cout<<i<<" "; 
    }
    cout<<" the number of  inversion pirs we ave got is: "<<m;


    return 0;
}