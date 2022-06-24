/*
 * URL - https://www.codewars.com/kata/5513795bd3fafb56c200049e
*/

#include <vector>

std::vector<int> countBy(int x, int n) {
	std::vector<int> temp;
	for(int i=1; i<=n; i++) {
		temp.push_back(i*x);
	}
	return temp;
}
