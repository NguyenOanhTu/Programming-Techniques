#include <stdio.h>
int main(){
	int *ip;
	int num = 5;
	ip = &num;
	printf("\nAddress of num = %u", &num);
	printf("\nAddress of num = %u", ip);
	printf("\nAddress of ip = %u", &ip);
	printf("\nValue of ip = %u", ip);
	printf("\nValue of num = %d", num);
	printf("\nValue of num = %d", *(&num));
	printf("\nValue of num = %d", *ip);
	return 0;
}
