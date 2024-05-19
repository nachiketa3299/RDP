/// @file Singleton_Naive
#pragma once
#include <iostream>

namespace rdp {

/// @brief 스레드 안전하지 않은 기본 싱글턴
class Singleton_Naive
{
public:
	// 소유권을 신경 쓸 필요 없도록 객체를 참조로 반환
	static auto instance() -> Singleton_Naive&
	{
		if (_inst == nullptr)
		{
			return *(_inst = new Singleton_Naive());
		}

		std::cout << "> [Singleton_Naive]: 싱글턴 객체가 이미 생성되어 있으므로, 기존 객체를 반환합니다.\n";

		return *_inst;
	}

private:
	// NOTE: 생성자를 private로 선언하여 외부에서 객체 생성을 막는다.
	Singleton_Naive() 
	{
		std::cout << "> [Singleton_Naive]: Singleton_Navie 생성자 호출" << std::endl;
	}

// deleted ctors
private: 
	Singleton_Naive(const Singleton_Naive&) = delete;
	Singleton_Naive(Singleton_Naive&&) = delete;
	Singleton_Naive& operator=(const Singleton_Naive&) = delete;
	Singleton_Naive& operator=(Singleton_Naive&&) = delete;

private:
	/* NOTE
	 * `inline` 키워드가 없으면 cpp 파일에서 `_inst`가 정의되어야 한다.
	 * `inline` 키워드로 이 헤더에서 _inst의 정의를 제공 가능 (C++17 이상)
	*/
	inline static Singleton_Naive* _inst;
};

};