method 2：使用宏来实现打印Hello world
#include <cstdio>
#define saySomething(sth) puts(#sth)
int main()
{
    return saySomething(Hello world);
}
