#pragma once

#include<thread>
#include "../common_header.h"

using namespace std;

namespace zyz {
	/*
	*  callable����������lambada����
	1��std::thread thread_object(callable)
	*/
	namespace thread_test 
	{
		void foo(int z)
		{
			for (int i = 0; i < z; ++i)
			{
				cout << "thread ������ͨ���������ݲ���" << endl;
			}
		}

		//����һ����������
		class Thread_Obj
		{
		public:
			void operator()(int x)
			{
				for (int i = 0; i < x; ++i)
				{
					cout << "thread ���ú������󲢴��ݲ���" << endl;
				}
			}
		};

		void thread_main()
		{
			thread th1(foo, 3);
			//����ʹ��join ����  �ȴ��߳����н��� ��������쳣
			th1.join();

			thread th2(Thread_Obj(), 3);
			th2.join();

			//����һ��lambda ���ʽ

			auto f = [](int x)
			{
				for (int i = 0; i < x; ++i)
				{
					cout << "ʹ��lambda���ݲ���" << endl;
				}
			};

			thread th3(f, 3);
			th3.join();

		}

	}
}
