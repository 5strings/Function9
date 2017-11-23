//
//  main.c
//  Call by reference
//
//  Created by Eun Jae Lee on 23/11/17.
//  Copyright © 2017 Eun Jae Lee. All rights reserved.
//
//  Pointer is require
//  pointer variable has data type

#include <stdio.h>

void disp(int*);

int main() {

//    int a=10, *p;// declared pointer. pointer is address/ value is in address of p
//    p = &a;
    
    int a=10;
    disp(&a); // call by reference
    printf("Value of a is %d \n",a);
}

void disp(int *x){
    
    *x = *x + 5;
}

