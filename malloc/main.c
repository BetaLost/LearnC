#include <stdio.h>
#include <stdlib.h>

int main() {
	int toAlloc;
	char* buf;
	
	printf("How many bytes (excluding null character) do you wish to allocate to mystr?\nEnter: ");
	fgets(buf, 100, stdin);

	if (atoi(buf) == 0) {
		fprintf(stderr, "Did not enter an integer.\n");
		return 1;
	}
	
	toAlloc = atoi(buf) + 1;
	char* mystr = malloc(toAlloc);

	if (mystr == NULL) {
		fprintf(stderr, "Failed to allocate %d bytes of memory to mystr.\n", toAlloc);
		return 1;
	} else {
		printf("Allocated %d bytes of memory to mystr.\n\n", toAlloc);
	}

	printf("What would you like to set mystr to? Max characters: %d\nEnter: ", toAlloc - 1);
	fgets(mystr, toAlloc, stdin);

	printf("\nBytes allocated to mystr: %d\nmystr value: %s\n", toAlloc, mystr);

	free(mystr);
	return 0;
}
