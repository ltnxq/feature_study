#pragma once

#include<thread>
#include "../common_header.h"

using namespace std;

namespace zyz {
	/*
	*  callable、函数对象、lambada对象
	1、std::thread thread_object(callable)
	*/
	namespace thread_test 
	{
		void foo(int z)
		{
			for (int i = 0; i < z; ++i)
			{
				cout << "thread 调用普通函数并传递参数" << endl;
			}
		}

		//创建一个函数对象
		class Thread_Obj
		{
		public:
			void operator()(int x)
			{
				for (int i = 0; i < x; ++i)
				{
					cout << "thread 调用函数对象并传递参数" << endl;
				}
			}
		};

		void thread_main()
		{
			thread th1(foo, 3);
			//必须使用join 函数  等待线程运行结束 否则会有异常
			th1.join();

			thread th2(Thread_Obj(), 3);
			th2.join();

			//创建一个lambda 表达式

			auto f = [](int x)
			{
				for (int i = 0; i < x; ++i)
				{
					cout << "使用lambda传递参数" << endl;
				}
			};

			thread th3(f, 3);
			th3.join();

		}

	}
}
