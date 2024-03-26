#include <iostream>
#include <string>

int compare(std::string s1, std::string s2) {
	if (s1.size() > s2.size()) {
		return 1;
	}
	else if (s1.size() < s2.size()) {
		return 0;
	}
	
	if (s1.size() == s2.size()) {
		if (s1 > s2) return 1;
		else if (s1 < s2) return 0;
	}
	return 0;
}