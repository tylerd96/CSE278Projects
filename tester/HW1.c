/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tylerdavis
 *
 * Created on February 5, 2017, 9:26 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define SWAP(x,y) do {typeof(x) tmp = x; x = y; y = tmp;} while(0)

/*
 * 
 */
int main(int argc, char** argv) {
    int x,y;
    float d1,d2;
    printf("x = ? ");
    scanf("%d",&x);
    
    printf("y = ? ");
    scanf("%d",&y);
    
    printf("d1 = ? ");
    scanf("%f",&d1);
    
    printf("d2 = ? ");
    scanf("%f",&d2);
    printf("\nReading Values...\n");
    
    printf("x = %d      y = %d\n",x,y);
    printf("d1 = %f     d2 = %f",d1,d2);
    
    printf("\n\nSwapping...\n");
    SWAP(x,y);
    SWAP(d1,d2);
    
    printf("x = %d      y = %d\n",x,y);
    printf("d1 = %f     d2 = %f",d1,d2);
    
    return 0;
}

