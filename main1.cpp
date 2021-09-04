#include"f1.h"

int main() {
	int pa[N], pb[N];
	unsigned qa[N], qb[N];
	for (int i = 0; i < N; i++) {
		pa[i] = i + 1;
		qa[i] = i + 2;
		pb[i] = i + 3;
		qb[i] = i + 5;

	}
	CRat A(pa, qa);
	CRat B(pb, qb);
	A.print();
	B.print();
	A = A + B;
	A.print();
	B = B - A;
	B.print();

	return 0;
}
