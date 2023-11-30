#include <stdio.h>
// 枚举的含义：把所有的可能都列举出来
// enum 类型名{枚举元素列表}；
// 枚举列表：一个一个的符号 mon 符号是常量
enum weekday
{
    mon,
    tue,
    wed,
    thu,
    fir,
    sat,
    sum
};
// 枚举类型的全称：enum weekday//和int一样，4字节
// 从零开始依次加一mon:0 tue:1     thu=10 fir=11
enum direct
{
    up = 'w',
    down = 's',
    left = 'a',
    right = 'd'
};
int main()
{
    /*  enum weekday day;
     day=fir; */
    enum direct dir;
    while (1)       
    {
        dir = getchar();
        switch (dir)
        {
        case up:
            printf("按了w\n");
            break;
        case down:
            printf("按了s\n");
            break;
        case left:
            printf("按了a\n");
            break;
        case right:
            printf("按了d\n");
            break;
        }
    }
    return 0;
}