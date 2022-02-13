/*#include <stdio.h>
typedef struct stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}stu;
int main()
{
    stu s1={"张三",20,"12345678911","男"};
    struct stu s2={"xxx",30,"1234321123","女"};
    return 0;
}*/
/*结构体的初始化
#include <stdio.h>
struct s
{
    int a;
    char c;
    char arr[20];
    double d;
};

struct t
{
    char ch[10];
    struct s $;
    char*pc;
};
int main()
{
    char arr[]="hello\n";
    struct t t={"hehe",{100,'w',"hello world",5.20},arr};//结构体的定义以及初始化
    printf("%s\n",t.ch);
    printf("%s\n",t.$.arr);
    printf("%lf\n",t.$.d);
    printf("%s\n",t.pc);
    return 0;
}*/
/*#include <stdio.h>
typedef struct stu
{
    char name[20];
    short age;
    char tele[12];
    char sex[5];
}stu;

void Print1(stu tmp)//使用void表示没有返回值
{
    printf("name:%s\n",tmp.name);
    printf("age:%d\n",tmp.age);
    printf("tele:%s\n",tmp.tele);
    printf("sex:%s\n",tmp.sex);
}

void Print2(stu*ps)//传结构体的地址，*ps是结构体指针
{
    printf("name:%s\n",ps->name);
    printf("age:%d\n",ps->age);
    printf("tele:%s\n",ps->tele);
    printf("sex:%s\n",ps->sex);
    
}
int main()
{
    stu s ={"李四",40,"1532657154","男"};
    //打印结构体数据的两种方式
    //两个函数哪个好
    //2好，时间短，空间消耗少
    //【重点】函数传参的时候，参数是需要压栈的。如果传递一个结构体对象的时候，结构体过大，参数压栈的系统开销比较大，所以会导致性能的下降
    //【结构体传参的时候，要传结构体的地址】
    Print1(s);
    Print2(&s);//传地址
    return 0;
}*/
//【栈区】：局部变量，函数的参数形式，函数调用也开辟空间
//【堆区】：动态内存分配，malloc/free,realloc,calloc,
//【静态区】：全局变量，静态变量
