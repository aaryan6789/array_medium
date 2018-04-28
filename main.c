/*
 * main.c
 *
 *  Created on: Feb 23, 2018
 *      Author: hsahu
 */
#include<stdio.h>
#include<stdlib.h>
#include<errno.h>
#include<string.h>

#include "moderate.h"


int main(void)
{
	convert_to_words("9923");
    convert_to_words("9920");
    convert_to_words("523");
    convert_to_words("9919");
    convert_to_words("89");
    convert_to_words("8989");
    convert_to_words("1010");

    int x = 15;
    int y = 6;
    printf("Minimum of %d and %d is ", x, y);
    printf("%d", min(x, y));
    printf("\nMaximum of %d and %d is ", x, y);
    printf("%d", max(x, y));


    int arr[] = {10, 12, 20, 30, 25, 40, 32, 33, 31, 35, 50, 60};
    int arr_size = sizeof(arr)/sizeof(arr[0]);
    sub_sort(arr, arr_size);

    int arr1[] = {-1, 2, 3, -10, 5, 6, -7, 20};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    max_sum_array(arr1, size1);
    max_sum_array_indices(arr1, size1);


    int arr2[] = {2, 2, -3, 10, 5, 6, 7, 20};
    int size2 = sizeof(arr1)/sizeof(arr1[0]);
    max_sum_array(arr2, size2);
    max_sum_array_indices(arr2, size2);

    return 0;
}
