/*
 * sub_sort.c
 *
 *  Created on: Feb 23, 2018
 *      Author: hsahu
 */

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>


void sub_sort(int* arr, int n) {
	int min, max, i, s, e;
	s = 0;
	e = n-1;

	/* Get the left longest subsequence*/
	for(s = 0; s<n; s++) {
		if(arr[s]>arr[s+1])
			break;
	}

	if (s == n-1){
		printf("The array is already Sorted.\n");
		return;
	}

	/* Get the right longest subsequence */
	for(e = n-1; e>0; e--){
		if(arr[e] < arr[e-1])
			break;
	}

	/* Let 1st element of middle section initialized to be both min and max */
	min = arr[s];
	max = arr[s];

	/* Find the min and max values in the middle section */
	for(i=s+1; i<=e; i++){
		if(arr[i] > max){
			max = arr[i];
		}

		if(arr[i] < min){
			min = arr[i];
		}
	}

	/* Find the 1st element in the left section which is greater than min */
	for(i = 0; i<s; i++){
		if(arr[i] > min){
			s = i;
			break;
		}
	}

	/* Find the 1st element in the right section which is smaller than max */
	for(i = n-1; i>e; i--){
		if(arr[i] < max){
			e = i;
			break;
		}
	}

	printf("\n The unsorted sub array which makes the given array"
	         " sorted lies between the indices %d and %d \n \n", s, e);
	return;
}
