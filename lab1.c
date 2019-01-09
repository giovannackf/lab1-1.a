#include <stdio.h>
int main () {
	int a, b, c;

	printf("lado a\n");
	scanf("%d", &a);
	printf("lado b\n");
	scanf("%d", &b);
	printf("lado c\n");
	scanf("%d", &c);
	
	if(a+b == a+c&& a+c == b+c) {
		printf("triangulo equilatero");
	}
    else if(a+b == a+c) {
    	printf("triangulo isoceles");
	}
	else if (a+b != a+c && a+c != b+c) {
	printf("triangulo escaleno");
	}
	
	return 0;
}
