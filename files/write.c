#include <stdio.h>
#include <string.h>

int main() {
	char fileName[100];
	char toWrite[1024];

	printf("File name: ");
	fgets(fileName, sizeof(fileName), stdin);

	printf("Enter text to write:\n");
	fgets(toWrite, sizeof(toWrite), stdin);

	fileName[strlen(fileName) - 1] = '\0';
	toWrite[strlen(toWrite) - 1] = '\0';

	FILE* fp = fopen(fileName, "w");
	fprintf(fp, "%s", toWrite);
	fclose(fp);
}
