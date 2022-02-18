#include <stdio.h>

typedef enum { false, true } bool;

typedef struct {
	char* name;
	int age;
	bool awake;
} Player;

void sleep(Player* p) {
	p->awake = false;
	printf("%s is sleeping!\n", p->name);
}

void wake(Player* p) {
	p->awake = true;
	printf("%s woke up!\n", p->name);
}

int main() {
	Player nodi = {.name="Nodi", .age=9, .awake=true};

	sleep(&nodi);
	printf("Awake: %d\n", nodi.awake);
	wake(&nodi);
	printf("Awake: %d\n", nodi.awake);
}
