#pragma once
#include "common_header.h"

namespace zyz 
{
	
	/*
	1��c++ stl reverse(begin��end) �����ݽ��з�ת
	*/
	namespace mudo_test
	{   
		const char digits[] = "9876543210123456789";
		const char* zero = digits + 9;

		//�����ת
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
				//++ �����ȼ�����*
				*p++ = '_';
			}

			*p = '\0';

			//�����buf����ʼ��ַ
			std::reverse(buf, p);
			return p - buf;
		}
	}
}