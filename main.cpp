#include <iostream>
#include <limits>

bool isPyth(unsigned a, unsigned b, unsigned c) {
	bool p = (a*a == (b*b + c*c));
	p = p || (b*b == (a*a + c*c));
	p = p || (c*c == (a*a + b*b));
	return p;
}


int main() {
  	using u_t = unsigned;
  	u_t a = 0, b = 0, c = 0;
  	std::cin >> c >> b;
  	size_t count = 0;
	while (std::cin >> a) {
		if ((max()/a<a)||(max()/b<b)||(max()/c<c)){
      			std::cerr << "Error\n";
                        return 2;
		}
  		if ((max()-a*a<b*b)||(max()-a*a<c*c)||(max()-b*b<c*c)) {
			std::cerr << "Error\n";
                        return 2;
		}
		count += isPyth(a, b, c) ? 1 : 0;
		c = b;
		b = a;
	}

	if (std::cin.eof ()) {
		std::cout << count;
		std::cout << "\n";
	} else if (std::cin.fail()){
		std::cerr << "Error\n";
		return 1;
	}
	return 0;

}
