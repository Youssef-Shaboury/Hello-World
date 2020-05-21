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


#include <stdio.h>
#define SIZE (40)
void Find_Maximum(unsigned char *ptr,int ArrayLength)                                               /* This function here takes 2 parameters, 
											                                             the name of the array as it acts as a pointer to the array and the
																							Array Length to manage number of iterations.Pass by reference
																							is the method used to adjust array values */
{
	unsigned char max=0;
	int j;
	for (j=0;j<5;j++)
		{
			if(*(ptr+j)>max)     /* This loop is to compare values of the array with the max which is initialized to 0 then save the value in max
								 as the loop iterates each value is compared to the updated max*/
			
			{						
			max=*(ptr+j);
			}
		}
	printf("Maximum is %d\n",max);	
}
void Find_Minimum(unsigned char *ptr,int ArrayLength)
{
	
	int min=*ptr;                    /*Here i initialized with a value from the array, because if i initialized it with 0 then i have already
										Set a value for the minimum */
	int j;								
	for (j=0;j<ArrayLength;j++)
		{
			
			if(*(ptr+j)<min)
			{
			min=*(ptr+j);
			}
		}

	printf("Minimum is %d\n",min);
	
}
void Find_Mean(unsigned char *ptr,int ArrayLength)
{
	int i=0;
	int mean=0;
		for(i=0;i<ArrayLength;i++) /*for the mean you need to add all values of the array and divide by the arraylength hence the loop*/
		{
			mean=mean+*ptr;
			ptr++;
		}

mean=mean/ArrayLength;
printf("Mean equal to %d\n",mean);
}
void Sort_Array(unsigned char *ptr,int ArrayLength)
{
	int i,j,s;
	for(i=0;i<ArrayLength;i++)                 /*First loop is to hold the first value and the second loop is to compare it with all other values 
											   of the array, if condition states if the value lets consider here j=3 and i=0 so its the first 
											   iteration of bigger loop and the fourth one in the smaller loop, lets assume values of 1,2,3,4,5
											   then *(ptr+i)=1 and *(ptr+j)=4 so the value "1" is going to be stored in a temp value to make a 
											   swap possible*/
	{ 
		for(j=i;j<ArrayLength;j++)
		{
		if(*(ptr+i)<*(ptr+j))
		{
			s=*(ptr+i);
			*(ptr+i)=*(ptr+j);
			*(ptr+j)=s;
		}
		}
	}
}
void Find_Median(unsigned char *ptr,int ArrayLength)
{
	unsigned char Med=0;
	unsigned char Med2=0;
	Sort_Array(ptr,ArrayLength);   /*Mathematical rules condone us to sort first then acquire the middle value,hence the sort function
								   next step is to check if the array length is an even or an odd number hence the mod 2 since median is
								   calculated differently in each situation*/
	if(ArrayLength%2==0)          
{
	ptr=(ptr+(ArrayLength/2)-1);
	Med=*ptr;
	Med2=*(ptr+2);
	Med=((Med+Med2)/2);
	printf("Median is %d\n",Med);
}
	else
	{
	ptr=(ptr+(ArrayLength/2));
	Med=*ptr;
	printf("Median is %d\n",Med);
	}
}
void Print_Array(unsigned char *ptr,int ArrayLength)
{
	int i=0;
	for(i=0;i<ArrayLength;i++)
	{
	printf("Element %d = %d\n",i,*(ptr+i));
	}
}
void Print_Statistics(unsigned char *ptr,int ArrayLength)
{
	Find_Maximum(ptr,ArrayLength);
	Find_Minimum(ptr,ArrayLength);
	Find_Mean(ptr,ArrayLength);
	Find_Median(ptr,ArrayLength);
}



void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
int ArrayLength=40;		/* I have the array length as a variable to make functions independent on size */ 						
Find_Maximum(test,ArrayLength);  /* Function to find the maximum of the given unsigned Array */
Find_Minimum(test,ArrayLength);  /* Function to find the minimum of the given unsigned Array */
Find_Mean(test,ArrayLength);     /* Function to find the average of the given unsigned Array */
Find_Median(test,ArrayLength);   /* Function to find the median of the given unsigned Array */
Print_Array(test,ArrayLength);   /* print all elements of the given array */
Print_Statistics(test,ArrayLength); /* print all statistics of the given array(mean median min max) */
Sort_Array(test,ArrayLength);




}

/* Add other Implementation File Code Here */
