#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>
#include "struct357.h"


int main() {
	unsigned long long number, answer;
	unsigned long long N;
	N = 10;
	//scanf("%llu", &N);
	N = N + 1; // indexes from 0 but we need from 1

	struct357 t = struct357();

	answer = t.getFrom(N);

	printf("answer = %llu\n", answer);
	printf("1000 = %llu\n", t.getFrom(1001));
	printf("2000 = %llu\n", t.getFrom(2001));
	printf("3000 = %llu\n", t.getFrom(3001));
	printf("4000 = %llu\n", t.getFrom(4001));
	printf("4925 = %llu\n", t.getFrom(4926));
	printf("4926 = %llu\n", t.getFrom(4927)); // last with ull
	 // use __int128 to unlock ~65k values
	// printf("5000 = %llu\n", t.getFrom(5001));

	return 0;
}
