#include <stdio.h>

int func();
void func2(int data);

void main()
{
    char s='a';
    int pre_inc=1, post_inc=5;


    int number=1;
    printf("%d\n",number);
    int j =func();
    printf("%d\n", j);
    func2(j);

}
//returndetatype fucnction_name(parameter);
int func()
{
    float f=5.2;
    int d= 6*(int)f;
    return 5;
}
void func2(int data)
{
    int sum= data+data;
    printf("%d",sum);
}



