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
 * @brief A program that can get some analytics of an array of unsigned char data items
 *
 * A program to analyze an array of unsigned char data items and report analytics on the maximum, minimum, mean, and median of the data set.
 * In addition, It reorders this data set from large to small. All statistics are rounded down to the nearest integer.
 *
 * @author Amir Shetaia
 * @date 13 Jul 2021
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
	int user_input;
  /* Statistics and Printing Functions Go Here */
  	main_list:
	printf("To print data elements enter \"1\"\n");
	printf("To print data statistics enter \"2\"\n");
	printf("To sort data enter \"3\"\n");
	printf("To terminiate enter \"4\"\n");
	printf(": ");
	scanf("%d", &user_input);
	
	switch (user_input){
		case 1:
			print_array(test);
			printf("\n");
			goto main_list;
			break;
		case 2:
			print_statistics(test);
			printf("\n");
			goto main_list;
			break;
		case 3:
			sort_array(test);
			printf("\n");
			goto main_list;
		case 4:
			break;
		default:
			printf("Wrong input");
			printf("\n");
			goto main_list;
	}
}



  /* Add other Implementation File Code Here */

void print_array (unsigned char *arr){

        for (int i = 0;  i < SIZE; i++){
		printf("item at pos [%d] is: %d\n", i+1, *arr);
		arr++;
        }
}


void sort_array (unsigned char *arr){
	
	int temp;

	for (int i = 0; i < SIZE; i++){
		
		for (int j = i+1; j < SIZE; j++){
			
				if (*(arr+i) < *(arr+j)){
					temp = *(arr+i);
					*(arr+i) = *(arr+j);
					*(arr+j) = temp;
				}
		}	
	}
	printf("\nData Sorted !!");	
 }
 
int find_median(unsigned char *arr){
	 int median;
	 if (SIZE % 2 == 0)
		median = *(arr+(SIZE/2))+*(arr+(SIZE/2)+1);
	median = *(arr+(SIZE/2));
	return median;
}

int find_maximum(unsigned char *arr){
	int max = 0;
	for (int i = 0; i < SIZE; i++){
		if (*(arr+i) > max)
			max = *(arr+i);
		}
		return max;
}

int find_minimum(unsigned char *arr){
	int min = *arr;
	 	for (int i = 0; i < SIZE; i++){
		if (*(arr+i) < min)
			min = *(arr+i);
		}
		return min;
}

int find_mean(unsigned char *arr){
	int sum = 0;
	for (int i = 0; i < SIZE; i++){
		sum += *(arr+i);
	}
	return sum/SIZE;
}

void print_statistics(unsigned char *arr){
	int median = find_median(arr);
	int maximum = find_maximum(arr);
	int minimum = find_minimum(arr);
	int mean = find_mean(arr);
	printf("\n");
	printf("Median = %d\n", median);
	printf("Mean = %d\n", mean);
	printf("Maximum = %d\n", maximum);
	printf("Minimum = %d\n", minimum);
}

