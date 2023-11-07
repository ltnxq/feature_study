#pragma once
#include "common_header.h"

namespace zyz 
{
	
	/*
	1、c++ stl reverse(begin，end) 将数据进行翻转
	*/
	namespace mudo_test
	{   
		const char digits[] = "9876543210123456789";
		const char* zero = digits + 9;

		//输出反转
		template<typename T>
		size_t convert(char buf[], T value)
		{
			T i = value;
			char* p = buf;
			do
			{
				int lsd = static_cast<int>(i % 10);
				i /= 10;
				*p++ = zero[lsd];
			} while (i != 0);

			if (value < 0)
			{
				//++ 的优先级高于*
				*p++ = '_';
			}

			*p = '\0';

			//这里的buf是起始地址
			std::reverse(buf, p);
			return p - buf;
		}
	}
}