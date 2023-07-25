/*
Creat a program that allows you to determine,
how many weeks a number entered that is expressed in minutes is equivalent to.
Consider the input of 15 numbers*/
#include<stdio.h>

double minutes_to_weeks(int minutes) {
    double minutes_in_a_week = 7 * 24 * 60;
    return minutes / minutes_in_a_week;
}

int main() {
	int i;
    int minutes[15];
    
    printf("Enter 15 numbers in minutes:\n");
    for (i = 0; i < 15; i++) {
    	printf("Enter the number in the position: %d\n",i+1);
        scanf("%d", &minutes[i]);
    }

    printf("Equivalent number of weeks for each input:\n");
    for (i = 0; i < 15; i++) {
        double weeks = minutes_to_weeks(minutes[i]);
        printf("%d minutes is equivalent to %.2f weeks\n", minutes[i], weeks);
    }

    return 0;
}

