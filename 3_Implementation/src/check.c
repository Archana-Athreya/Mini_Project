#include <stdio.h>
#include <string.h>
#include "bank.h"

int check(char *pass,char *password)
{
	
	 int c=strcmp(pass,password);
	 return c;
		
}