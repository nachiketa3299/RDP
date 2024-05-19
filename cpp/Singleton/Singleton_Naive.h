/// @file Singleton_Naive
#pragma once
#include <iostream>

namespace rdp {

class Singleton_Naive
{
public:
	static auto instance() -> Singleton_Naive&
	{
		if (_inst == nullptr)
		{
			return *(_inst = new Singleton_Naive());
		}

		std::cout << "> 싱글턴 객체가 이미 생성되어 있으므로, 기존 객체를 반환합니다.\n";

		return *_inst;
	}

private:
	// NOTE: 생성자를 private로 선언하여 외부에서 객체 생성을 막는다.
	Singleton_Naive() 
	{
		std::cout << "> Singleton_Navie 생성자 호출" << std::endl;
	}

// deleted ctors
private: 
	Singleton_Naive(const Singleton_Naive&) = delete;
	Singleton_Naive(Singleton_Naive&&) = delete;
	Singleton_Naive& operator=(const Singleton_Naive&) = delete;
	Singleton_Naive& operator=(Singleton_Naive&&) = delete;

private:
	inline static Singleton_Naive* _inst;
};

};