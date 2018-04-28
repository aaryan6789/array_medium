/* max_sum.c *  Created on: Feb 24, 2018 * Author: hsahu */

#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

/* CTCI : Moderate : 6 16.17
 * Contiguous Sequence:
 * You are given an array of integers (both positive and negative).
 * Find the contiguous sequence with the largest sum. Return the sum.
 * EXAMPLE
 * Input: 2, -8, 3, -2, 4, -10
 * Output: 5  (i.e , { 3, -2, 4})
 */

void max_sum_array(int *arr, int size){

	int max_so_far = 0;
	int max_ending_here = 0;

	for(int i=0; i<size; i++){
		max_ending_here = max_ending_here + arr[i];

		if(max_ending_here < 0){
			max_ending_here = 0;
		}

		if(max_ending_here > max_so_far){
			max_so_far = max_ending_here;
		}
	}

	printf("Max of the array is = %d\n", max_so_far);
	return;
}

/* Algo:
 * 1. Look for all the +ve contiguous segments of the array.
 * Keep track of the Max Sum contiguous segment among all positive segments.
 *
 * 2. Each time we get a positive segment compare it with max so far and update max so far.
 * if its greater then max so far.
 */
void max_sum_array_indices(int *arr, int size){

	int max_so_far = 0;
	int max_ending_here = 0;
	int start = 0;
	int end = size;
	int s = 0;

	for(int i=0; i<size; i++){
		max_ending_here = max_ending_here + arr[i];

		// If Max ending here is less then 0 then, set it to 0 and increment i
		if(max_ending_here < 0){
			max_ending_here = 0;
			s = i+1;
		}

		// If the max is changed to the new Max, then
		if(max_ending_here > max_so_far){
			max_so_far = max_ending_here;
			start = s;
			end = i;
		}
	}

	printf("Max of the array is = %d from %d to %d\n", max_so_far, start, end);
	return;
}
