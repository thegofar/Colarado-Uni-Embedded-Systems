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
 * @file stats.c
 * @brief contains the main entry point to test my simple C functions
 *
 * Various functions to sort through an array
 *
 * @author Craig Barry
 * @date 4th Feb 2018
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

  int minimum, maximum, mean, median;

  void print_statistics(unsigned char arr[], int length)
  {
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
    for(int i=0;i<length;i++)
    {
      printf("%d\n" ,arr[i]);
    }
  }

  printf("Printing the unsorted array:\n");
  print_array(test,SIZE);
  printf("\nPrinting the sorted array:\n");
  sort_array(test,SIZE);
  print_array(test,SIZE);
  printf("\nHere are some stats:\n");
  print_statistics(test,SIZE);
}

  unsigned char find_median(unsigned char arr[], int length)
  {
    return arr[(length+1)/2];
  }

  unsigned char find_mean(unsigned char arr[], int length)
  {
    int sum=0;
    for(int i=0;i<length;i++)
    {
      sum+=arr[i];
    }
    return sum/length;
  }

  unsigned char find_maximum(unsigned char arr[], int length)
  {
    unsigned char tmp=0;
    for(int i =0; i<length; i++)
    {
      if(arr[i]>tmp){tmp=arr[i];}
    }
    return tmp;
  }

  unsigned char find_minimum(unsigned char arr[], int length)
  {
    unsigned char tmp=255;
    for(int i =0; i<length; i++)
    {
      if(arr[i]<tmp){tmp=arr[i];}
    }
    return tmp;
  }

  void sort_array(unsigned char arr[], int length)
  { 
    unsigned char tmp;
    unsigned char *a, *b;
    for(int i=0;i<length-1;i++){
      for(int j=0;j<length-1; j++){
        if(arr[j]<arr[j+1]){
          tmp=arr[j];  /* store the smaller value in tmp */
          b=&arr[j+1]; /* store larger value address in b */
          a=&arr[j];   /* store smaller value address in a */
          *a=*b;       /* swap b's value into a's value */
          *b=tmp;      /* assign b's value from a's before we overwrote it! */
        }
      }
    }
  }

