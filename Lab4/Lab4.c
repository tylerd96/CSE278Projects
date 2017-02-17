/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tylerdavis
 *
 * Created on February 16, 2017, 10:33 AM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
void exercise1();
void exercise2();
void exercise3();
int main(int argc, char** argv) {
    //exercise1();
    exercise2();
    return (EXIT_SUCCESS);
}

void exercise1() {
    printf("Introduce 10 int values: ");
    int num[10];
    for(int i=0;i<10;i++) {
        scanf("%d",&num[i]);
    }
    int min = 1000000,max=-10000000;
    for(int j = 0;j<10;j++) {
        if(num[j] < min) {
            min = num[j];
        }
        if(num[j] > max) {
            max = num[j];
        }
    }
    int mode = num[0],times=0;
    for(int k = 0; k < 10; k++) {
        int occr = 0;
        for(int d = 0; d < 10; d++) {
            if(num[d] == num[k]) {
                occr++;
            }
        }
        if(occr > times) {
            times = occr;
            mode = num[k];
        }
    }
    printf("The smallest value is %d, the greatest value is %d, and the most repeated value is %d.",min,max,mode);
}

void exercise2() {
    typedef enum {
        Land, Water, Air
    } Movement;
    struct Animal{
        char name[40];
        char species[40];
        Movement move;
        int apendages;
    };
    struct Animal animals[5];
    for(int i = 0;i<5;i++) {
        struct Animal an;
        
        printf("Name: ");
        scanf("%s",&an.name);
        
        printf("Species: ");
        scanf("%s",&an.species);
        
        int k;
        printf("Moving by: (0)Land, (1)Water, (2)Air: ");
        scanf("%d",&k);
        if(k == 0) {
            an.move = Land;
            printf("How many legs: ");
            scanf("%d",&an.apendages);
        } else if(k == 1) {
            an.move = Water;
            printf("How many fins: ");
            scanf("%d",&an.apendages);
        } else if(k == 2) {
            an.move = Air;
            printf("How many wings: ");
            scanf("%d",&an.apendages);
        }
        
        //printf("%d          ",an.apendages);
        animals[i] = an;
    }
    int legs=0, wings=0,fins=0;
    for(int j = 0; j<5;j++) {
        if(animals[j].move == Air) {
            wings = wings+ animals[j].apendages;
            //printf("#: %d",animals[j].apendages);
        } else if(animals[j].move == Land) {
            legs = legs + animals[j].apendages;
            //printf("#: %d",animals[j].apendages);
        } else {
            fins = fins + animals[j].apendages;
            //printf("#: %d",animals[j].apendages);
        }
    }
    printf("We have %d legs, %d fins, %d wings.",legs,fins,wings);
}

void exercise3() {
    
}