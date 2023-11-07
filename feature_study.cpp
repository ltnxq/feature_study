// feature_study.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include "cstring_test.h"
#include "mudo_test.h"

using namespace std;

int main()
{
    //zyz::string_test::test_strchr();
   // zyz::string_test::test_memcopy();

    char buf[100] = { 0 };

    size_t len = zyz::mudo_test::convert<int>(buf, 987);

    string s(buf, len);

    cout << "covert string is " << s << endl;

}

