/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: tylerdavis
 *
 * Created on February 13, 2017, 4:31 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main(int argc, char** argv) {
    int mid=0;
    do {
        printf("Enter the number in the middle of the rhombus (1 to 9): ");
        scanf("%d",&mid);
        
    } while(mid <=0 || mid >=10);
    
    int rowLimit = (mid*2)-1;
    int curNum = 1,curRow=1,dec=0;
    int numSpaces,space;
    
    while(curRow<=rowLimit) {
        //finds total number of necessary spaces on either side
        numSpaces = rowLimit - ((curNum*2)-1);
        space = numSpaces/2;
        //prints out the current row
        for(int i = 0;i<space;i++) {
            printf(" ");
        }
        for(int i=1;i<=curNum;i++) {
            printf("%d",i);
        }
        for(int i = curNum-1;i>0;i--) {
            printf("%d",i);
        }
        for(int i=0;i<space;i++) {
            printf(" ");
        }
        printf("\n");
        
        if(curNum == mid) {
            dec = 1;
        }
        // Decides how to change the current 'middle' number
        if(dec == 0) {
            curNum++;
        } else {
            curNum--;
        }
        // Increases the count of row
        curRow++;
    }
    return (EXIT_SUCCESS);
}

