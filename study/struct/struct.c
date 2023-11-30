#include <stdio.h>
#include <string.h>
// 结构体类型声明
struct student
{
    int id;
    char name[20];
    float score; // 定义变量至少要有一个
};               // 打包类型
                 // 这个类型全称不是struct 也不是student，而是struct student
int main()
{
    struct student stu1;
    // 用.(点)访问结构体中成员
    stu1.id = 1;
    strcpy(stu1.name, "zf"); // stu1.name="z"；不可以直接赋值,strcpy 字符拷贝函数
    stu1.score = 99.5;
    printf("%d %s %f\n", stu1.id, stu1.name, stu1.score);

    return 0;
}
