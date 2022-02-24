#include <stdio.h>

int main() {
	char buf[512];

	fread(buf, 1, sizeof(buf), stdin);

	printf("STDIN:\n%s\n", buf);
}
