#include <stdio.h>

typedef struct {
	char* name;
	int age;
	int awake;
} Player;

void sleep(Player* p) {
	p->awake = 0;
	printf("%s is sleeping!\n", p->name);
}

void wake(Player* p) {
	p->awake = 1;
	printf("%s woke up!\n", p->name);
}

int main() {
	Player nodi = {"Nodi", 9, 1};

	sleep(&nodi);
	printf("Awake: %d\n", nodi.awake);
	wake(&nodi);
	printf("Awake: %d\n", nodi.awake);
}
