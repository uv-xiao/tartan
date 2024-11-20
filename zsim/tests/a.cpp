#include <iostream>

int a[4] = {0, 1, 2, 3};
int b[4];

int main() {
	for (int i=0; i<4; i++) {
		b[i] = (a[i] << 2) | 1;
	}
	int sum = 0;
	for (int i=0; i<4; i++) {
		sum += b[i];
	}
	std::cout << sum << std::endl;
	return 0;
}

