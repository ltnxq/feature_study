#pragma once

#include "common_header.h"

namespace zyz
{
	namespace string_test 
	{   
		/*
		1��char* strrchr(const char* str, int c) �ַ������ַ�c���һ�γ��ֵ�λ��,���δ�ҵ�ֱ�ӷ��ؿ�ָ�� 
		   char* strchr(const char* str,int c) �ַ������ַ�c��һ�γ��ֵ�λ��,���δ�ҵ�ֱ�ӷ��ؿ�ָ�� 
		2��void *memcpy(void *str1, const void *str2, size_t n)  ��str2��ʼ��n���ַ� ���Ƶ�str1��
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
				printf("|%c| ֮����ַ����� - |%s|\n", ch, ret);
		}

		void test_memcopy()
		{
			const char* str = "www.baidu.com";
			//������г�ʼ��
			char dest[50] = { 0 };
			//��������Բ��������һ����ֹ��������Ϊ������ϰ�߻��� +1 �ȽϺ���
			memcpy(dest, str, strlen(str)+1);
			std::cout << "str is " << dest << std::endl;
		}
	}
}