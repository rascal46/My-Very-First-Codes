#include <stdio.h>

int main() {

int m,n,a,b,c,d;

char e;

scanf("%d", &m);

scanf("%c", &e);

scanf("%d", &n);

if (e == '+') {

	a = m+n;

	printf("Answer:\n");
	printf("%d", a);

	}

else if (e == '-') {

	b = m-n;

	printf("Answer:\n");
	printf("%d", b);

	}

else if (e == '*') {

	c = m*n;

	printf("Answer:\n");
	printf("%d", c);

	}

else if (e == '/') {

	if (n != 0) {

		d = m/n;

		printf("Answer:\n");
		printf("%d", d);

		} else {

			printf ("NOT VALID!");

			}

	}

    return 0;
}


