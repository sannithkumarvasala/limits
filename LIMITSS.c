#include <stdio.h>
#include <limits.h>
void main()
{
	printf("Short Int:\nSigned:%hd to %hd\n", SHRT_MIN, SHRT_MAX);
	printf("\nUnsigned: %d to %hu\n", 0, USHRT_MAX);
	printf("Int:\nSigned:%d to %d\n", INT_MIN, INT_MAX);
	printf("\nUnsigned:%d to %u\n", 0, UINT_MAX);
	printf("Long Int:\nsigned:%ld to %ld\n", LONG_MIN, LONG_MAX);
	printf("\nUnsigned:%d to %lu\n", 0, ULONG_MAX);
	printf("\nSigned:%lld to %lld\n", LLONG_MIN, LLONG_MAX);
	printf("\nUnsigned:%d to %llu\n", 0, ULLONG_MAX);
	printf("Short Int:\nSigned:%hd to %hd\n \nUnsigned:%d to %hu\n", SHRT_MIN, SHRT_MAX, 0, USHRT_MAX);

	
}
