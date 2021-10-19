/**
 * 
 * 
 * 
 * 
 */

#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>
#include<string.h>

#include "strPalChk.h"

#define MAX_SIZE 64

int main()
{
	char userString[MAX_SIZE];
	int16_t errorStatus = 0;

	printf("Enter the string to be verified:\n");
	scanf("%[^\n]", userString);

	if(strlen(userString) > MAX_SIZE){
		printf("Error occured ! String length is too long ! Program will exit now !");
		exit(0);
	}

	errorStatus = strPalCheck(userString);

	switch(errorStatus)
	{
		case POINTER_ERROR:
			printf("Error occured ! No string entered ! Program will exit now !");
			exit(0);
		break;

		case UNKNOWN_ERROR:
			printf("Unknown error ! Program will exit now !");
			exit(0);
		break;

		default:
			printf("String successfully verified !");
	}

//	printf("Hello world!\n");
	return 0;
}