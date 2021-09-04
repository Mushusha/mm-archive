#include<iostream>
#include<stdlib.h>

#define N 8
using namespace std;

class CRat {
	int p[N];
	unsigned int q[N];
public:
	CRat (int p[N], unsigned int q[N]);
	void print();
	CRat operator+(const CRat &C);
	CRat operator-(const CRat &C);

};
