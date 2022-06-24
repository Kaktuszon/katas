#include <vector>

std::vector<int> countBy(int x, int n) {
	std::vector<int> temp;
	for(int i=1; i<=n; i++) {
		temp.push_back(i*x);
	}
	return temp;
}
