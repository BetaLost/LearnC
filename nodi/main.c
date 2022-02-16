#include <stdio.h>

struct Player {
	char* name;
	int age;
	int awake;
};

void sleep(struct Player* p) {
	p->awake = 0;
	printf("%s is sleeping!\n", p->name);
}

void wake(struct Player* p) {
	p->awake = 1;
	printf("%s woke up!\n", p->name);
}

int main() {
	struct Player nodi = {"Nodi", 9, 1};

	sleep(&nodi);
	printf("Awake: %d\n", nodi.awake);
	wake(&nodi);
	printf("Awake: %d\n", nodi.awake);
}
