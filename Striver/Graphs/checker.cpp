#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int>  func1(int size){
  
  vector<int> a(size,9);
  return a; 
}



vector<vector<int>> fun2(int rows, int cols){
   vector<vector<int>>  arr(rows, vector<int>(cols,0));
   return arr; 
}



int *fun3(int size){

int arr =  new int[size];
return arr; 
}



int** fun4(int r, int c){

  int arr = new int[r][c]; 
  return arr; 
}


int (&fun4())[3]{

  static int arr[3]={}; 
  return arr;
}


int (&func5())[3][3]{
   static int arr[3][3]={};
   return arr;
}

// array of 1d
array<int,3> fun6(){
   
   // the arry of fixed size is used for making the array with size 3 and initlializing array with the value 0, in it.
   array<int,3> arr(0);
   return arr;
}

// array of 2D
array<array<int, 4>,3> fun7(){
  // the below syntax is used for initializing the array of 3,4 with the value 3. 
  array<array<int,4>,3> arr(3);
  return arr; 
}



int main(){

return 0 ;
}

