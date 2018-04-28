/* number_max.c * Created on: Feb 23, 2018 * Author: hsahu */

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>


#define CHAR_BIT 8

/*Function to find minimum of x and y*/
int min(int x, int y) {

	return  y + ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1)));
}

/*Function to find maximum of x and y*/
int max(int x, int y) {

	return x - ((x - y) & ((x - y) >> (sizeof(int) * CHAR_BIT - 1)));
}
