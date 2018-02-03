/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)

void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

    /* Other Variable Declarations Go Here */

    /* Statistics and Printing Functions Go Here */
    void print_statistics(unsigned char arr[], int length)
    {
    	int minimum, maximum, mean, median;
	
        minimum = find_minimum(arr, length);
	maximum = find_maximum(arr,length);
	mean = find_mean(arr,length);
	median = find_median(arr,length);
	
	printf("Minimum: %d\n", minimum);
	printf("Maximum: %d\n", maximum);
	printf("Mean: %d\n", mean);
	printf("Median: %d\n", median);

    }
    
    void print_array(unsigned char arr[], int length)
    {

    }

    print_statistics(test,SIZE);
    
}

/* Add other Implementation File Code Here */
int find_median(unsigned char arr[], int length)
{

}

int find_mean(unsigned char arr[], int length)
{

}

int find_maximum(unsigned char arr[], int length)
{
    int tmp=-2147483646;
    for(int i =0; i<length; i++)
    {
        if(arr[i]>tmp){tmp=arr[i];}
    }
    return tmp;
}

int find_minimum(unsigned char arr[], int length)
{
    int tmp=2147483646;
    for(int i =0; i<length; i++)
    {
        if(arr[i]<tmp){tmp=arr[i];}
    }
    return tmp;
}

int sort_array(unsigned char arr[], int length)
{

}

