#include "tasks.h"

void main_62() {
	printf("keys:\n1 - push\n2 - pop\n3 - show stack\n0 - exit\n\n");
	int N = 5;
	int index = 0;
	int* stack = (int*)malloc(N * sizeof(int));
	int key;

	do
	{
		int x;
		printf("key: ");
		std::cin >> key;

		switch (key)
		{
		case 1:
			std::cin >> x;
			push(x, stack, &N, &index);
			printf("\n");
			break;

		case 2:
			x = pop(stack, &N, &index);
			printf("%d\n\n", x);
			break;

		case 3:
			printall(stack, N, index);
		}

	} while (key != 0);
}