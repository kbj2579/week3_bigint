#include <iostream>
#include <string>
int compare(std::string s1, std::string s2);

int main() {
	std::string s1, s2, s3, s4, s5, s6, z, cmp = "";

	std::cout << "First number  >> ";
	std::cin >> s1;
	std::cout << "Second number >> ";
	std::cin >> s2;
	s4 = s1;
	s5 = s2;
	if (compare(s1, s2)) { // s2가 s1보다 크도록 설정
		cmp = s2;
		s2 = s1;
		s1 = cmp;
	}
	
	int k = s2.size() - s1.size();
	for (int j = 0; j < k; j++) {
		z += "0";
	}
	s1 = z + s1;
	int size1 = s1.size();
	int size2 = s2.size();
	int i = 0;
	
	while (size2 != 0) {
		int sum = (s1[size1 - 1] - '0') + (s2[size2 - 1] - '0');
		int num;
		if (sum + i >= 10) {
			num = (sum + i) % 10;
			i = 1;
			s3 += std::to_string(num);
		}
		else {
			num = sum + i;
			i = 0;
			s3 += std::to_string(num);
		}
		size1--;
		size2--;	
	}
	if (i == 1) {
		s3 += "1";
	}

	std::cout << "Sum           >> ";
	for (int j = s3.size() - 1; j >= 0; j--) {
		std::cout << s3[j];
	}
	std::cout << '\n';

	int check = -1;
	if (compare(s4, s5)) { // s5가 s4보다 크도록 설정
		cmp = s5;
		s5 = s4;
		s4 = cmp;
		check = 1;
	}

	k = s5.size() - s4.size();
	z = "";
	for (int j = 0; j < k; j++) {
		z += "0";
	}
	s4 = z + s4;
	int size4 = s4.size();
	int size5 = s5.size();
	i = 0;
	while (size5 != 0) {
		int sub = (s5[size5 - 1] - '0') - (s4[size4 - 1] - '0');
		int num;
		if (sub + i < 0) {
			num = sub + i + 10;
			i = -1;
			s6 += std::to_string(num);
		}
		else {
			num = sub + i;
			i = 0;
			s6 += std::to_string(num);
		}
		size4--;
		size5--;
	}

	while (s6[s6.size() - 1] == '0' && s6.size() != 1) {
		s6.pop_back();
	}
	
	std::cout << "Sub           >> ";
	if (check == -1 && s6[s6.size()-1] != '0') std::cout << "-";
	for (int j = s6.size() - 1; j >= 0; j--) {
		std::cout << s6[j];
	}
		

}