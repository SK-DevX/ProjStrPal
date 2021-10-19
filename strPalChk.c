
/*
*
*
*
*
*/

#include<stdio.h>
#include<stdint.h>

#include "strPalChk.h"

int16_t strPalCheck(char *userString)
{
	if(userString == NULL)
		return POINTER_ERROR;

	for(;*userString != '\0'; userString++)
		if(*userString == ' ')
			printf("Found space\n");
	return PASS;
}