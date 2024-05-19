#include <iostream>

#include "Singleton_Naive.h"

using namespace std;
using namespace rdp;

int main()
{
	cout << "> 싱글턴 s1 생성\n";
	auto& s1 = Singleton_Naive::instance();

	cout << "> 싱글턴 s2 생성\n";
	auto& s2 = Singleton_Naive::instance();

	cout << "> 생성된 s1과 s2가 같은 객체인지 주소로 비교: \n";
	cout << "> 비교 결과: " << boolalpha << (&s1 == &s2) << noboolalpha << endl;
}