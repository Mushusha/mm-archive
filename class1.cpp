#include"f1.h"

CRat::CRat(int p[N], unsigned int q[N]) {
	for (int i = 0; i < N; i++) {
		this->p[i] = p[i];
		this->q[i] = q[i];
	}
}

void CRat::print() {
	for (int i = 0; i < N; i++)
		cout << p[i] << "/" << q[i] << " ";
	cout << "\n";
}

CRat CRat::operator+(const CRat &C) {
	for (int i = 0; i < N; i++) {
		p[i] = p[i] * C.q[i] + C.p[i] * q[i];
		q[i] = q[i] * C.q[i];
	}
	return CRat(p, q);
}

CRat CRat::operator-(const CRat &C) {
        for (int i = 0; i < N; i++) {
                p[i] = p[i] * C.q[i] - C.p[i] * q[i];
                q[i] = q[i] * C.q[i];
        }
        return CRat(p, q);
}

