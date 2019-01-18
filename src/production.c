/*
 * production.c
 *
 *  Created on: January 16, 2019
 *      Author: Therese Smith
 *      Student: Tom Graham
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "production.h"
#include <math.h>

bool production(int argc, char* argv[]){
	bool results = false;
	bool done = false;
	//get the year, Usage as needed.
	int year = -1;
	puts("CALENDAR");
	if(argc<2)
	{
		puts("Enter a year");
		scanf("%d",&year);
		if(year<1752)
		{
			printf("Usage: Year should be greater than 1751, received %d.\n",year);
			done = true;
		}
	}
	else
	{
		char* ptr=0;
		long year_l = strtol(argv[1],&ptr,10);
		year = (int)year_l;
		if(year<1752)
		{
			printf("Usage: Year should be greater than 1751, received %d.\n",year);
			done = true;
		}
	}
	if(!done)
	{
		//print month name
					//print the days of the week text
					//print the weeks


	}
	if(!done)
	{
		results=true;
	}
	return results;
}

int calculate_days_in_month(int year, int month)
{
	if (year < 1752){
		return -1;
	}
	if (month < 0){
	    return -1;
	}

	if (month == 3 || month == 5 || month == 8 || month == 10){
		return 30;
	}
	else if (month == 1){
		if (is_leap_year(year)){
			return 29;
		}
		else{
			return 28;
		}
	}
	else{
		return 31;
	}
}

int is_leap_year(int year) {
	if (year < 1752) {
		return -1;
	}
	else if (year % 400 == 0) {
        return 1;
    }
	else if (year % 100 == 0){
	    return 0;
	}
	else if (year % 4 == 0) {
	    return 1;
	}
	else{
	    return 0;
	}
}

int calculate_day_of_week(int day, int month, int year)
{
	//return  (day+=month<3?year--:year-2,23*month/9+day+4+year/4-year/100+year/400)%7;
	return ((day + ((13*month-1)/5) + (year/100) + ((year/100)/4) + (day/4) - 2*day) % 7);
}



