#include <stdio.h>

int main () {
	int a, b, c,res;
	
	printf("informe a\n");
	scanf("%d", &a);
	printf("informe b\n");
	scanf("%d", &b);
	printf("informe c\n");
	scanf("%d", &c);
	
	res = (((c*2)+(b*3)+(c*4))%11)-11;
	
	printf("%d\n", res);
	
	return 0;
}
