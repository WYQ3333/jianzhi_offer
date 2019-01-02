#include<iostream>
#include<string>
using namespace std;

class Solution {
public:
	void replaceSpace(char *str, int length) {
		string s(str);
		if (s.empty()){
			return;
		}
		char *stemp1 = "%";
		char *stemp2 = "2";
		int temp = 0;
		while (-1!=(temp=s.find(' '))){
			s.insert(temp,stemp1);
			s.insert(temp + 1, stemp2);
			s[temp + 2] = '0';
		}
		str = (char*)s.c_str();
	}
};

int main(){
	Solution s;
	char *str = "hello world";
	s.replaceSpace(str, strlen(str));
	system("pause");
	return 0;
}