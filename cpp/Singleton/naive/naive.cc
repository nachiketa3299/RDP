#include <iostream>

#include "Singleton_Naive.h"

using namespace std;
using namespace rdp;

int main()
{
	auto& s1 = Singleton_Naive::instance();
	auto& s2 = Singleton_Naive::instance();

	cout << "> 싱글턴 패턴을 사용한 객체 생성 후 두 주소 비교: \n";
	cout << boolalpha << (&s1 == &s2);
	cout << noboolalpha << endl;
}