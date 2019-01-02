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
		char *stemp = "%20";
		int temp = 0;
		while (-1!=(temp=s.find(' '))){
			s.insert(temp, '%',1);
			s.insert(temp, '2', 1); 
			s.insert(temp, '0', 1);
		}
	}
};

int main(){
	Solution s;
	char *str = "hello world I love you";
	s.replaceSpace(str, strlen(str));
	system("pause");
	return 0;
}