#include "struct357.h"


struct357::struct357() {
	struct357::addCallsBeforeRemove = 200;
}

unsigned long long struct357::getFrom(unsigned long long X) {
	struct357::values.removeALL();
	struct357::values.pushBack(1);
	struct357::nodeFor3 = 0;
	struct357::nodeFor5 = 0;
	struct357::nodeFor7 = 0;
	struct357::addCalls = 0;
	 // uncoment if you want to add any logic with this variable
	// struct357::addCallsBeforeRemove = 200;

	unsigned long long min;
	for (unsigned long long i = 1; i < X; i++) {
		 min = struct357::getMin(
			3 * struct357::values[struct357::nodeFor3]->getValue(),
			5 * struct357::values[struct357::nodeFor5]->getValue(),
			7 * struct357::values[struct357::nodeFor7]->getValue()
		);

		struct357::values.pushBack(min);
		
		if (min == 3 * struct357::values[struct357::nodeFor3]->getValue()) {
			struct357::nodeFor3++;
		}
		if (min == 5 * struct357::values[struct357::nodeFor5]->getValue()) {
			struct357::nodeFor5++;
		}
		if (min == 7 * struct357::values[struct357::nodeFor7]->getValue()) {
			struct357::nodeFor7++;
		}

		struct357::addCalls++;
		struct357::checkCalls();
	}
	return struct357::values.getTail()->getValue();
}

void struct357::checkCalls() {
	if (struct357::addCalls == struct357::addCallsBeforeRemove) {
		struct357::addCalls = 0;
		//struct357::addCallsBeforeRemove += struct357::addCallsBeforeRemove >> 1; // *1.5
		
		unsigned long long min = struct357::getMin(struct357::nodeFor3, struct357::nodeFor5, struct357::nodeFor7);
		struct357::values.removeAllPrev(min);

		struct357::nodeFor3 -= min;
		struct357::nodeFor5 -= min;
		struct357::nodeFor7 -= min;
	}
}

unsigned long long struct357::getMin(unsigned long long x, unsigned long long y, unsigned long long z) {
	unsigned long long min = x;
	if (y < min) {
		min = y;
	}
	if (z < min) {
		min = z;
	}
	return min;
}
