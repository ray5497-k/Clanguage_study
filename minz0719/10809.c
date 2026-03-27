#include <stdio.h>

int main(void) {
	int arr[26];

	for (int i = 0; i < 26; i++) {
		arr[i] = -1;
	}

	char S[100];
	scanf("%s", S);

	for (int i = 0; S[i] != '\0'; i++) {
		int a = S[i] - 'a';
		if (arr[a] == -1)
			arr[a] = i;
	}

	for (int i = 0; i < 26; i++) {
		printf("%d ", arr[i]);
	}

	return 0;
}