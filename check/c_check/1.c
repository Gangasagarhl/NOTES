#include<stdio.h>
#include<stdarg.h>

#include<stdarg.h>

void  print(int n , ...){

    va_list args;
    va_start(args,n);
    for(int i=0;i<n;i++){
        printf("%d",var_args(args,n));

    va_end(args);
    }

}


void print(int n, ...){
    va_list args;
    var_start(args, n);
        for(int -0)
}

int main(){

    return 0; 
}