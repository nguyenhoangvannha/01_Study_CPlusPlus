#include <stdio.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

#define N 100005
int n=0, a[N], F[N];
int m, b[N];

void main() 
{
	// array a, length n
	while (scanf_s("%d", &a[n + 1]) > 0) n++;

	// array b, length m, in increasing order
	for (int i = 1; i <= n; i++) {
		F[i] = lower_bound(b + 1, b + m + 1, a[i]) - b;
		m = max(m, F[i]);
		b[F[i]] = a[i];
	}

	// m is also max(F)
	printf("%d\n-\n", m);

	int Expected = m;
	vector<int> T;

	// add m elements from a into T
	for (int i = n; i >= 1; i--) {
		if (F[i] == Expected) {
			T.push_back(a[i]);
			Expected--;
		}
	}

	// output T in reversed order
	for (int i = T.size() - 1; i >= 0; i--)
		printf("%d\n", T[i]);
}
