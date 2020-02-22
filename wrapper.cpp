#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//Enabling this is dangerous
//#include"wrapper.h"

void myMemset(char* s, int c, size_t n)
{
	printf("Inside my wrapper funxtion\n");
	::memset( s, c, n);
}
