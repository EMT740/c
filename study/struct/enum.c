#include <stdio.h>
// ö�ٵĺ��壺�����еĿ��ܶ��оٳ���
// enum ������{ö��Ԫ���б�}��
// ö���б�һ��һ���ķ��� mon �����ǳ���
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
// ö�����͵�ȫ�ƣ�enum weekday//��intһ����4�ֽ�
// ���㿪ʼ���μ�һmon:0 tue:1     thu=10 fir=11
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
            printf("����w\n");
            break;
        case down:
            printf("����s\n");
            break;
        case left:
            printf("����a\n");
            break;
        case right:
            printf("����d\n");
            break;
        }
    }
    return 0;
}