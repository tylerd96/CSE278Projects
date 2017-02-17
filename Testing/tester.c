/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tylerdavis
 *
 * Created on February 12, 2017, 2:59 PM
 */

#include <stdio.h>
#include <stdlib.h>
#define max(a) a

int main() {
   int x = 1;
   switch (x) {
      case max(2): printf("yes\n");
      case max(1): printf("no\n");  break;
   }
}

