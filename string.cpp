#include <iostream>
#include <string>
using namespace std;

int main()
{
	//string s1;//Ĭ�Ϲ���
	//string s2(s1);//��������
	string s3("lijiachengoooiuytrewwertyuioiuytr");//�ַ�������
	string s4(5, 'l');
	string s5(s3, 2);//��s3�дӵڶ���λ�ÿ�ʼ���ַ�����s5

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