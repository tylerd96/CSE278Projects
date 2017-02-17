/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tylerdavis
 *
 * Created on January 31, 2017, 10:51 AM
 */

#include <stdio.h>
#include <stdlib.h>
#define SQUARE(x) x*x

/*
 * 
 */
int main(int argc, char** argv) {
    float s=10,u=30,t=2,a;
    a = 2*(s-u*t)/SQUARE(t);
    printf("Result = %f", a);
    return 0;
}

