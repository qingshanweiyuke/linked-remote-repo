#include <stdio.h>

void byteOrder()
{
	union {
		int value;
		char test_value[sizeof(int)];
	} test;
	test.value = 0x01234567;
	
	for(int i = 0; i < sizeof(int); i++){
		printf("%d\t",test.test_value[i]);
	}
}

int main()
{
	byteOrder();
	return 0;
}
