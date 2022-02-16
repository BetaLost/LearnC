#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

void* runThread(void* text) {
	char* name = (char*)text;

	for (int i = 1; i <= 10; i++) {
		printf("This is iteration %d of thread \"%s\"\n", i, name);
		sleep(1);
	}
}

int main() {
	pthread_t threadOne;
	pthread_t threadTwo;

	pthread_create(&threadOne, NULL, runThread, (void*)&"one");
	pthread_create(&threadTwo, NULL, runThread, (void*)&"two");

	pthread_exit(NULL);
}
