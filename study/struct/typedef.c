/* typedef用一个新的类型名代替原有的类型名 */
//1.typedef 类型名 类型小名
//如typedef int i//i为int小名
//2.typedef struct 类型名
//{
//    成员列表
//}别名;
#include <stdio.h>
typedef struct student
{
    int id;
    char name;
    int age;
}STU;//STU为struct student的别名
//typedef struct student STU;//STU为类型别名


int main()
{
   STU a;
    return 0;
}
