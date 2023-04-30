#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE* f= fopen("output.txt","wb");
	fprintf(f,"Hello world");
   fclose(f);
	return EXIT_SUCCESS;
}
