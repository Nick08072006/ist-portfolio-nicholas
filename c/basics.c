#include <stdio.h>

int main()
{
	printf("this is my c basics file\n");
	
	int num;
	printf("Give the magic genie a random number or I will end your bloodline: ");	
	scanf("%i", &num);

	printf("Your number was dumb, atone for your sins: %i\n", num);
	return 0;
}
