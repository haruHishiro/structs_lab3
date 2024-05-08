#pragma once

#include <malloc.h>
#include <stdio.h>
#include "List.h"


class struct357 {
public:
	struct357();
	unsigned long long getFrom(unsigned long long N);
private:
	void checkCalls();
	unsigned long long getMin(unsigned long long x, unsigned long long y, unsigned long long z);
	unsigned long long nodeFor3 = 0;
	unsigned long long nodeFor5 = 0;
	unsigned long long nodeFor7 = 0;
	List values;
	unsigned long long addCallsBeforeRemove = 20;
	unsigned long long addCalls = 0;
};
