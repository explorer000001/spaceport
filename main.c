#include <stdio.h>

typedef struct test_s {
	int a;
	int b;
} test_t;


static test_t test[] = {
	{
		.a = 1,
	},
	{
		.b = 2,
	},
	{},
};
int test_size = sizeof(test) / sizeof(test[0]);

int main()
{
	int i;
	
	printf("test_size=%d\n", test_size);
	for (i = 0; i < test_size; i++) {
		printf("a=%d,b=%d\n", test[i].a, test[i].b);
	}
	return 0;
}