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
 * @file <Stats.h> 
 * @brief <Function Prototypes>
 *
 *
 * @author <Youssef Hesham>
 * @date <19-3-2020 >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__


    void Find_Maximum(unsigned char *ptr,int ArrayLength);  /* Function to find the maximum of the given unsigned Array */
	void Find_Minimum(unsigned char *ptr,int ArrayLength);  /* Function to find the minimum of the given unsigned Array */
	void Find_Mean(unsigned char *ptr,int ArrayLength);     /* Function to find the average of the given unsigned Array */	
	void Find_Median(unsigned char *ptr,int ArrayLength);   /* Function to find the median of the given unsigned Array */	
	void Print_Array(unsigned char *ptr,int ArrayLength);   /* print all elements of the given array */
	void Print_Statistics(unsigned char *ptr,int ArrayLength); /* print all statistics of the given array(mean median min max) */
	void Sort_Array(unsigned char *ptr,int ArrayLength);     /* Function to sort in a descending order */


#endif /* __STATS_H__ */
