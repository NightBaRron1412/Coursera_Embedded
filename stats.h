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
 * @brief Header file for array analtyics program
 *
 * Header file for a program that analyzes an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set.
 *
 * @author Amir Shetaia
 * @date 13 Jul 2021
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 

void print_array (unsigned char *arr);
/**
 * @brief prints array to the screen
 *
 * Given an array of data and a length, prints the array to the screen
 *
 * @param arr pointer to data array
 *
 * @return void
 */

void sort_array (unsigned char *arr);
/**
 * @brief <sorts array elements descending>
 *
 * <Given an array of data and a length, sorts the array from largest to smallest. >
 *
 * @param <arr> <pointer to data array>
 *
 * @return <void>
 */

int find_median(unsigned char *arr);
/**
 * @brief finds median of array elements
 *
 * Given an array of data and a length, returns the median value
 *
 * @param arr pointer to data array
 *
 * @return meidan
 */

int find_maximum(unsigned char *arr);
/**
 * @brief finds maximum of array elements
 *
 * Given an array of data and a length, returns the maximum
 *
 * @param arr pointer to data array
 *
 * @return maximum
 */

int find_minimum(unsigned char *arr);
/**
 * @brief finds minimum of array elements
 *
 * Given an array of data and a length, returns the minimum
 *
 * @param arr pointer to data array
 *
 * @return minimum
 */

void print_statistics(unsigned char *arr);
/**
 * @brief prints array statistics to the screen
 *
 * A function that prints the statistics of an array including minimum, maximum, mean, and median.
 *
 * @param arr pointer to data array
 *
 * @return void
 */


#endif /* __STATS_H__ */
