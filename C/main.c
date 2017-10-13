#include <stdio.h>

int count ;
extern void write_extern();
 
int main() {
	int from_main = 3;
	printf("%s%d\n", "main variable before editing: ", from_main);
	test_parameter(&from_main);
	printf("%s%d\n", "main variable after editing: ", from_main);
	test_ptr();
	return 0;
}

void test_parameter(int *from_main) {
	*from_main = 10000;
}

void test_ptr() {
	int* a;
	int* aptr;
	aptr = &a;
	a = &count;

	count = 5;
	write_extern();

	*a = 10;
	printf("%s\n", "*********************");
	printf("count is : %d\n", count);
	printf("&count is : %d\n", &count);
	printf("a is : %d\n", a);
	printf("*a is : %d\n", *a);
	printf("&a is : %d\n", &a);
printf("aptr is : %d\n", aptr);
}