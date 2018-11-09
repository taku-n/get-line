// 端末で EOF を入力するときは Ctrl+D を押す
// (なぜか 2回 必要. 1回目 は無視されてしまっている?)
// Windows では Ctrl+Z

#include <stdio.h>
#include "get-line.h"

void get_line(char s[], int n)
{
	int c;
	int i = 0;

	do {
		c = getchar();

		if (i < n) {
			if (i == n - 1) {
				s[i] = '\0';
			} else if (c != '\n' && c != EOF) {
				s[i] = c;
			} else {
				s[i] = '\0';
			}
		}

		i++;
	} while (c != '\n' && c != EOF);
}
