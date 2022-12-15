#include "tasks.h"


struct unique_words {
	int n;
	char* word;
	bool flag;
};

void main_810() {
	unique_words* uw = nullptr;
	size_t N = 1000;
	uw = (unique_words*)malloc(N * (sizeof(char) + sizeof(int) + sizeof(bool)));
	int n = 0;
	bool flag = false;
	FILE* file = open_f("8.10_in.txt", "r");
	if (file != NULL) {
		while (!feof(file)) {
			uw[n].word = (char*)malloc(sizeof(char) * 1000);
			uw[n].n = 1;
			uw[n].flag = false;
 			fscanf(file, "%s", uw[n].word);
			n++;
		}

		for (int i = 0; i < n; i++) {
			for (int j = i+1; j < n; j++) {
				if (string(uw[i].word) == string(uw[j].word)) {
					uw[i].n++;
					uw[j].n++;
				}
			}
		}

		for (int i = 0; i < n; i++) {
			if (uw[i].flag == false) {
				cout << uw[i].word << " " << uw[i].n << endl;
				for (int j = i + 1; j < n; j++) {
					if (string(uw[i].word) == string(uw[j].word)) {
						uw[j].flag = true;
					}
				}
			}
		}
	}
}