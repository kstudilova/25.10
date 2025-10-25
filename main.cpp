#include <iostream>

bool isPyth(unsigned a, unsigned b, unsigned c) {
	bool p = (a * a == (b * b + c * c));
	p = p || (b*b == (a * a + c * c));
	p = p || (c * c == (a * a + b * b));
	return p;
}


int main() {
	using u_t = unsigned;
	u_t a = 0;
	size_t count = 0;
	while (std::cin >> a) {
		count ++;
	}

	if (std::cin.eof ()) {
		std::cout << count;
		std::cout << "\n";
	} else if (std::cin.fail()){
		std::cerr << "Error\n";
		return 1;
	}

}
