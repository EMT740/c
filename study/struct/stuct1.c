#include <stdio.h>
// 结构体类型声明
struct student
{
    int id;      // 定义变量至少要有一个
    char name;   // 打包类型
    float score; // 这个类型全称不是struct 也不是student，而是struct student
}stu2;//定义stu2

int main()
{
struct student stu3={1,"z",20};
printf("%d %s %f\n",stu3.id,stu3.name,stu3.score);
    return 0;
}
