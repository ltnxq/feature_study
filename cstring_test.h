#pragma once

#include "common_header.h"

namespace zyz
{
	namespace string_test 
	{   
		/*
		1、char* strrchr(const char* str, int c) 字符串中字符c最后一次出现的位置,如果未找到直接返回空指针 
		   char* strchr(const char* str,int c) 字符串中字符c第一次出现的位置,如果未找到直接返回空指针 
		2、void *memcpy(void *str1, const void *str2, size_t n)  将str2开始的n的字符 复制到str1中
		*/
		void test_strchr()
		{
			const char* str = "www.baidu.com";
			const char* ret = NULL;
			char ch = '.';
			ret = strrchr(str, ch);
            
			if (NULL == ret)
				printf("not find the character\n");
			else
				printf("|%c| 之后的字符串是 - |%s|\n", ch, ret);
		}

		void test_memcopy()
		{
			const char* str = "www.baidu.com";
			//必须进行初始化
			char dest[50] = { 0 };
			//讲道理可以不复制最后一个终止符，但是为了养成习惯还是 +1 比较合适
			memcpy(dest, str, strlen(str)+1);
			std::cout << "str is " << dest << std::endl;
		}
	}
}