#include <stdio.h>
#include <string.h>

int main(void) {
	char S[1000001];
	scanf("%[^\n]", S);
	int cnt = 1;
	int len = strlen(S);

	for (int i = 0; i < len; i++) {
		if (S[i] == ' ')
			cnt++;
	}

	if (S[0] == ' ')
		cnt--;

	if (S[len - 1] == ' ')
		cnt--;

	printf("%d", cnt);

	return 0;
}