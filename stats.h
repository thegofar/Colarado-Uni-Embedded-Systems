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
 * @file stats.h 
 * @brief header file to support module 1 of the embedded coursework
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

/**
 * @brief A function that prints the statistics of an array including minimum, 
 * maximum, mean, and median.
 *
 * @param arr The unsigned array of bytes passed in as a pointer
 * @param n The number of elements in the array
 *
 * @return void - this function outputs to the terminal with printf
 */
    void print_statistics(unsigned char *arr, int n); 
    print_array() - Given an array of data and a length, prints the array to the screen
    find_median() - Given an array of data and a length, returns the median value
    find_mean() - Given an array of data and a length, returns the mean
    find_maximum() - Given an array of data and a length, returns the maximum
    find_minimum() - Given an array of data and a length, returns the minimum
    sort_array() - Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )



#endif /* __STATS_H__ */
