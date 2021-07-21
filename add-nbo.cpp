#include <stddef.h> // for size_t
#include <stdint.h> // for uint8_t
#include <stdio.h> // for printf
#include <arpa/inet.h>

int main(int argc, char* argv[]) {
	uint32_t num1;
	uint32_t num2;
	
	FILE *fp1 = fopen(argv[1], "rb");
	fread(&num1, sizeof(num1), 4, fp1);

	FILE *fp2 = fopen(argv[2], "rb");
	fread(&num2, sizeof(num2), 4, fp2);

	num1 = ntohl(num1);
	num2 = ntohl(num2);

	printf("%p\n", num1 + num2);
}





