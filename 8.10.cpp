#include "tasks.h"

struct unique_words {
	int n;
	char* word;
};

void main_810() {
	size_t N = 10;
	unique_words* uw = (unique_words*)malloc(N * (sizeof(char) + sizeof(int)));
	uw[0].word = (char*)malloc(sizeof(char) * 10);
	int i = 0;
	FILE* file = fopen("8.10_in.txt", "r");
	cin >> uw[0].word;
	cout << uw[0].word;
}