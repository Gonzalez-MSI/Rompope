#include <stdio.h>

int main(){
	int a, b, c;
	float d = 0, e = 1, f = 2;
	a = 14;
	b = 3;
	c = 2;
  
	d = a >> b / c;
		printf("d = %d\n", d);
  
	e += a?++d:d++;
		printf("e = %f\n", e);
  
	f = a * b + d;
	printf("f = %f\n", f);
  
	printf("a = %d\n", a);
	printf("b = %d\n", b);
	printf("c = %d\n", c);
	printf("d = %f\n", d);
	printf("e = %f\n", e);
  
  return 0;
}
