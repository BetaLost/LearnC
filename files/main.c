#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
	FILE* pFile = fopen(argv[1], "r");
	char ch;

	if (pFile == NULL) {
		fprintf(stderr, "Failed to open file \"%s\".\n", argv[1]);
		return 1;
	}

	do {
		ch = fgetc(pFile);
		printf("%c", ch);
	} while (ch != EOF);

	fclose(pFile);
	return 0;
}
