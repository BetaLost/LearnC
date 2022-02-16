#include <stdio.h>

int main() {
	printf("Welcome to Hanooi-San's calculator!\n\n");

	int choice;
	double numOne, numTwo, answer;

	while (1) {
		printf("Operations:\n1: Add\n2: Subtract\n3: Multiply\n4: Divide\n5: Exit\n\n");
		printf("Enter choice: ");
		scanf("%d", &choice);

		if (choice == 1 || choice == 2 || choice == 3 || choice == 4) {
			printf("Enter the first number: ");
			scanf("%lf", &numOne);
			printf("Enter the second number: ");
			scanf("%lf", &numTwo);
		} else if (choice == 5) {
			return 0;
		} else {
			fprintf(stderr, "Invalid choice \"%d\", exiting...\n", choice);
			return 1;
		}

		if (choice == 1) {
			answer = numOne + numTwo;
		} else if (choice == 2) {
			answer = numOne - numTwo;
		} else if (choice == 3) {
			answer = numOne * numTwo;
		} else if (choice == 4) {
			answer = numOne / numTwo;
		}

		printf("\nThe answer is: %g\n\n", answer);
	}

	return 0;
}
