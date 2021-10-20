
#include<stdio.h>
#include<string.h>
#include<criterion/criterion.h>
#include "Cr_Test.h"
#include "../strPalChk.h"

#define MAX_SIZE 64
#define FALSE 0

char userString[MAX_SIZE] = "Done is better than perfect!";

void suiteSetup(void)
{
 printf("In Constructor!\n");
}

void suiteTeardown(void)
{
 printf("In Destructor!\n");
}

TestSuite(StrPalTest, .init = suiteSetup, .fini = suiteTeardown);

Test(StrPalTest, createString)
{
 printf("Max Size: %d\t String size: %zu\n", MAX_SIZE, strlen(userString));
 cr_expect(strlen(userString) > 20 == FALSE, "String legth verification test against max size(20) allowed! Test should fail");
}

Test(StrPalTest, createString_2)
{
 printf("Max Size: %d\t String size: %zu\n", MAX_SIZE, strlen(userString));
 cr_expect(strlen(userString) > MAX_SIZE == FALSE, "String legth verification test against max size(64) allowed! Test should pass");
}

