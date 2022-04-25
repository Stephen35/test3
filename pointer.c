#include <stdio.h>
/*
void function(char *p)
{
	
	*p = 'A';
}
*/

void function1(const char *p)
{
	char a = 'a';
	p  = &a;
}

int main()
{
	//char *str  = "linux";
	char str[] = "linux";
	function(str);
	printf("output is %s\n",str);
	return 0;
}
