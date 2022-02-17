#include <stdio.h>

int main(int argc, char** argv) {
	FILE* fp = fopen(argv[1], "r");
	char line[1024];
	int linecount = 0;

	while (fgets(line, sizeof(line), fp) != NULL) {
		printf("%d\t%s", ++linecount, line);
	}

	fclose(fp);
}
