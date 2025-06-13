#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int maxScore(string s) {
        int n=  s.size();
        int maxi = -1;
        int j=0,k=0,i=0; 
        for(i=1;i<n;i++){
            
            int zero=0, one=0; 
            for(j=0;j<i;j++){
                // this will count for number of zeros
                
                if(s[j]=='0') zero++;
            }
            

            for(k=j;k<n;k++){
                // count of ones
                 if(s[k]=='1') one++;
            }
	
            maxi =  max(maxi, one+zero);
            cout<<"i  j  k zero  one maxi :  "<<i<<"   "<<j<<"  "<<k<<"  "<<zero<<"  "<<one<<"  "<<maxi<<"\n";
        }
        

        return maxi;
    }
    
int main(){

   string s= "011101";
   cout<< maxScore(s)<<"\n";

return 0 ; 

}
