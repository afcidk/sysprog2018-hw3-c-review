#include <stdio.h>
double m[] = {2.09703464477855301570627215629e209, 64};
void gen() {
	// original output: afcidk
	m[0] += 1.03214314438870169274345588995e209;
	while (m[1]--) {
		m[0] /= 2;
	}
	puts((char *)m);
}
int main() { gen(); return 0;}
