#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string s1;//默认构造
	//string s2(s1);//拷贝构造
	string s3("lijiachengoooiuytrewwertyuioiuytr");//字符串构造
	string s4(5, 'l');
	string s5(s3, 2);//将s3中从第二个位置开始的字符构成s5

	/*s4.append("mayijiao");
	s4.append("liojia", 2);
	s4.append(s3);*/

	cout << s4.capacity() << endl;
	s4.assign(s3);
	cout << s4.capacity() << endl;

	//cout << s3 << endl;
	cout << s4 << endl;
	//cout << s5 << endl;
	return 0;
}