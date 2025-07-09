#include<bits/stdc++.h>
using namespace std;

int main(){
    int inp = 15, tar= 7, cnt =0, cnt1 = 0 ;
    int  hi = inp ^ tar; 
    while( inp -  tar){
        if( (  (inp&1) ^ (tar&1)  ) ==1) cnt++; 
        inp >>=1;
        tar >>=1;
    }
    while(hi)
    {   if(hi&1)cnt1++;
        hi >>= 1; 
    }

    cout<< cnt <<" " <<cnt1<<"\n ";
}
