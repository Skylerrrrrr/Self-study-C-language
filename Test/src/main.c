#include <stdio.h>//这个命令就是会告诉预处理器(cpp)去读系统头文件stdio.h中的内容, and then把它插入到程序作为文本-->first.i
#include <string.h>
#include <windows.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

// int main()//main是一个函数名//int表示的是main函数返回一个整数
// {
//     int num = 18;//表示将会使用一个名为 num 的变量, 而且 num 是 int整数类型
//     printf("Hello, World!\n");
//     printf("number = %d\n", num);// %d(its a语法) 表示:使用整型输出字符串

//     return 0;//表示:程序的结束
// }


/* 数据类型：
    char: 声明字符型变量或函数
    double: 声明双精度变量或函数
    float: 声明浮点型变量或函数
    int : 声明整型变量或函数
    long: 声明长整型变量或函数
    short : 声明短整型变量或函数
    signed : 声明有符号类型变量或函数
    _Bool:  声明布尔类型
    _Complex ：声明复数
    _Imaginary: 声明虚数
    unsigned : 声明无符号类型变量或函数
    void : 声明函数无返回值或无参数，声明无类型指针
*/


/* 控制语句：

    -循环语句

for : for 循环，使用的最多 
    for(初始化部分; 条件判断部分; 调整部分)
        循环语句;
int main()
{
    int i = 0;
    for(i=1; i<=10; i++)
    {
        if(i == 5)
            continue;
        printf("%d", i);//打印结果:1234678910(没 5)
    }
    return 0;
}
//for循环的变种:
int main()
{
    for(;;)//for循环的初始化、调整、判断 都可省略，but 判断部分如果省略，那判断条件就是：恒为正
    {
        printf("呵呵\n");//一直打印呵呵
    }
return 0;
}
do ：循环语句的前提条件循环体
while：循环语句的循环条件

do...while:先做do 后循环
int main()
{
    int i = 1;
    //1~10
    do//先做了 do 里面的语句
    {
        printf("%d ", i);
        i++;
    }
    while (i<=10);//这里要加 ;//上面下来的数据<=10 就回到头(its a 循环)
    return 0;
}

break : 跳出当前循环
continue：结束当前循环，开始下一轮循环(回到开头)

    -条件语句

//if：条件语句的判断条件
int main()
{
    // int age = 10;
    // if(age < 18)//(不加 ; )
    //     printf("未成年\n");//(condition)
    // else 
    //     printf("成年\n");
    // if(age < 18)
    // {//这里一对 {} 就是一个代码块
    //     printf("未成年\n");
    //     printf("不能谈恋爱\n");
    // }
    //     else if(age>=18 && age<28)
    //         printf("青年\n");
    //     else if(age>=28 && age<50)
    //         printf("壮年\n");
    //     else if(age>=50 && age<90)
    //         printf("老年\n");
    //     else 
    //         printf("老不死\n");

    // int num = 5;
    // if( 5 == num)//(好的代码风格,也避免写出bug -> 把常量放在==左边)
    // {
    //     printf("呵呵\n");
    // }

    // int i = 1;
    // while (i<=100)
    // {
    //     if(i%2 == 1)// %:取模(取模運算是求兩個數相除的餘數)
    //         printf("%d ", i);
    //     i++;
    // }
    return 0;
}
*/

// else : 条件语句的否定分支，与最近的 未匹配的 if 作匹配(就近原则)
// goto: 无条件跳转语句

//     -开关语句

// switch: 用于开关语句
// int main()
// {
//     int day = 0;
//     scanf("%d", &day);//&:取地址//test:3
//     switch(day)
//     {
//         case 1:
//             printf("星期一\n");
//             break;
//         case 2:
//             printf("星期二\n");
//             break;
//         case 3:
//             printf("星期三\n");
//             break;
//         case 4:
//             printf("星期四\n");
//             break;
//         case 5:
//             printf("星期五\n");
//             break;
//         case 6:
//             printf("星期六\n");
//             break;
//         case 7:
//             printf("星期七\n");
//             break;

//     }
// }



// case：开关语句的另外一种分支
// default : 开关语句中的其他分支(放哪都行,但一个switch语句内,只能出现一条default)

//     -返回语句
// return ：子程序返回语句（可以带参数，也看不带参数） 


/* 存储类型:
auto : 声明自动变量 一般不使用
extern : 声明变量是在其他文件正声明（也可以看做是引用变量）
register : 声明寄存器变量
static: 声明静态变量 
*/


/* 其他关键字
const: 声明只读变量
sizeof : 计算数据类型长度
typedef: 用以给数据类型取别名
volatile : 说明变量在程序执行中可被隐含地改变
 */


/*符号:
i+=m -> i = i+m


 */

//分支语句和循环语句(由;隔开的就是语句):


/* int main()
{
    int get = 0;
    int ch = 0;
    char password[20] = {0};
    printf("请输入密码:>");
    scanf("%s", password);//%s(打印类型为字符串)//输入密码,并存放在password数组中
    //now:缓冲区还剩一个(\n)- 输入完密码后的回车键(确认输完后才会回车)
    //so we can:读取一下(\n)
    while((ch = getchar()) != '\n')// !=:判断等于
    {
        ;//空语句(don't hv to do anything)
    }
    printf("请确认密码(Y/N):>");
    get = getchar();//Y/N
    if(get == 'Y')
    {
        printf("确认成功\n");
    }
    else 
    {
        printf("已放弃确认\n");
    }
    return 0;
} */

/* int main()
{
    int ch = 0;
    while((ch = getchar()) != EOF)
    {
        if(ch<'0' || ch>'9')// || : OR
            continue;
        putchar(ch);
    }
    return 0;
} */

/* 求几个阶乘的和:

int main()
{
    int i = 0;
    int n = 0;
    int Ans = 1;
    //scanf("%d", &n);//不考虑溢出的情况
    int sum = 0;
    for(n=1; n<=3; n++)
    {
        Ans = 1;
    
        for(i=1; i<=n; i++)
        {
            Ans = Ans*i;
        }
        sum+=Ans;
    }

    printf("sum = %d\n", sum);
    return 0;
}

优化后:
int main()
{
    //int i = 0;
    int n = 0;
    int Ans = 1;
    //scanf("%d", &n);//不考虑溢出的情况
    int sum = 0;
    for(n=1; n<=10; n++)
    {
        Ans = Ans*n;
        sum+=Ans;
    }

    printf("sum = %d\n", sum);
    return 0;
} */


/* 写一个代码:在arr数组(有序的)中找到 7
//折半查找算法/二分查找算法
//       1 2 3 4 5 6 7 8 9 10
// 下标: 0 1 2 3 4 5 6 7 8  9 //靠下标找,因为这是一直顺下去的
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;//想找7的位置
    int sz = sizeof(arr)/sizeof(arr[0]);//求元素个数
    int left = 0;//左下标
    int right = sz-1;//右下标(元素个数减一)
   while(left <= right)
   {
    int mid = (right+left)/2;
            if(arr[mid] > k)
        {
            right = mid-1;
        }
        else if(arr[mid] < k)
        {
            left = mid+1;
        }
        else
        {
            printf("找到了,下标是: %d\n", mid);
            break;//因为找到了就不用再继续找了
        }
   }
    if(left>right)
    {
        printf("找不到\n");
    }
    return 0;
} */


/* int main()
{
    //
    //welcome to bit!!!!!!
    //####################
    //w##################!
    //we################!!
    //wel##############!!!
    //...
    //welcome to bit!!!!!!
    //
    
    char arr1[] = "welcome to bit!!!!!!";
    char arr2[] = "####################";
    int left = 0;
    //int right = sizeof(arr1)/sizeof(arr1[0])-2//所以是减2(把\0的减了)
    //char arr[] = "abc";
    //[a  b  c \0]//这跟刚刚的数组不一样, 这是字符, 要小心!
    // 0  1  2  3//下标
    //OR:
    int right = strlen(arr1)-1;

    while(left<=right)
    {
        arr2[left] = arr1[left];
        arr2[right] = arr1[right];
        printf("%s\n", arr2);
        //每打印一次 休息一秒:
        Sleep(1000);//1000ms = 1s //Sleep 要大写!
        system("cls");//执行系统命令的一个函数 - cls - 清空屏幕
        left++;
        right--;
    }
    printf("%s\n", arr2);
    return 0;

} */


/* //模拟用户登录情景,只能登入三次(if 三次都错了,then推出程序, if密码正确就显示登陆成功)
int main()
{
    int i = 0;
    char password[20] = {0};

    for(i=0; i<3; i++)//不是 i<=3 因为三次的话 是不能继续进行循环了
    {
        printf("请输入密码:>");
        scanf("%s", password);
        if (strcmp(password, "123456")==0)// == 这个不能用来比较两个字符串是否相等(正确密码与输入的密码), 应该用一个库函数: strcmp
        {
            printf("登入成功\n");
            break;
        }
        else
        {
            printf("密码错误\n");
        }
    }
    if(i==3)
    {
        printf("三次密码均错误,退出程序");
    }
    return 0;
} */


/* //把輸入的三个数字排序(从大到小)
int main()
{
    int a = 0;
    int b = 0;
    int c = 0;
    scanf("%d %d %d", &a, &b, &c);//输入的时候也要加空格
    //把a存最大的数
    if(a<b)
    {
       int temp = a;
       a = b;
       b = temp;
    }
    if(a<c)
    {
        int temp = a;
        a = c;
        c = temp;
    }
    if(b<c)
    {
        int temp = b;
        b = c;
        c = temp;
    }

    printf("%d%d%d\n", a, b, c);
    return 0;
} */


/* //打印1~100的三的倍数:
int main()
{
    int i = 0;
    for(i = 0; i<=100; i++)
    {
        if(i%3 == 0)//被3整除:1~100的三的倍数
        {
            printf("%d\n", i);
        }
    }
    return 0;
} */

/* //求两个数的最大公约数
int main()
{
    int m = 0;
    int n = 0;
    int r = 0;
    scanf("%d %d", &m, &n);
    while(m%n)
    {
        r = m%n;
        //m = n;
        n = r;
    }
    printf("%d\n", n);
    return 0;
} */

/* //打印1000~2000年的闰年(閏年是指該年有366日)
        // int main()
        // {
        //     int year = 0;
        //     int count = 0;//计算有多少个
        //     for(year = 1000; year <= 2000; year ++)
        //     {
        //         //判断year是不是闰年
        //         //1.能被4整除 并且不能被100整除   or: 能被400整除
        //         if(year%4 == 0 && year%100 != 0)// != : 不等于
        //         {
        //             printf("%d年\n", year);
        //             count++;
        //         }
        //         else if(year%400 == 0)
        //         {
        //             printf("%d年\n", year);
        //             count++;
        //         }
        //     }
        //     printf("\ncount = 有%d个\n", count);
        //     return 0;
        // }
//OR更简短的:
 int main()
{
    int year = 0;
    int count = 0;//计算有多少个
    for(year = 1000; year <= 2000; year ++)
    {
        if(((year%4==0) && (year%100 !=0)) || (year%400 == 0))// ||:或者
        {
            printf("%d年\n", year);
            count++;
        }
    }
        printf("\ncount = 有%d个\n", count);
        return 0;
} */

/* //打印100~200之间的素数/质数:
int main()
{
    int i = 0;
    int count = 0;
    for(i=100; i<=200; i++)
    {
        int j = 0;
        for(j=2; j<=sqrt(i); j++)//sqrt - 开平方的数学库函数
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j>sqrt(i))
        {
            count++;
            printf("%d\n", i);
        }
    }
    printf("\ncount = %d个\n", count);
    return 0;
} */

/* //数1~100的所有整数中出现多少个9:
int main()
{
    int i = 0;
    int count = 0;
    for(i=1; i<=100; i++)
    {
        if(i%10 == 9)//个位是9
            count++;
        if(i/10 == 9)//十位是9
            count++;
    }
    printf("count = %d\n", count);
    return 0;
} */

/* //计算1/1-1/2+1/3-1/4+1/5...+1/99-1/100的值,打印出结果:
int main()
{
    int i = 0;
    double sum = 0.0;
    int flag = 1;
    for(i=1; i<=100; i++)
    {
        sum += flag * 1.0/i;
        flag = -flag;//负负得正

    }
    printf("sum = %lf\n", sum);
    return 0;
} */

/* //求10个整数中的最大值:(也是靠下标的概念找,在不排序的方法下)
int main()
{
    int arr[] = {-1, -2, -3, -4, -5, -6, -7, -8, -9, -10};
    //int max = 0;//表示:最大值是 0
    int max = arr[0];//表示:最大值为第一个数
    int i = 0;//下标
    int sz = sizeof(arr)/sizeof(arr[0]);//求元素个数
    for(i=1; i<sz; i++)
    {
        if(arr[i]>max)//下标对应的值大于max
        {
            max = arr[i];
        }
    }
    printf("max = %d\n", max);
    return 0;
} */

/* //在屏幕上输出9*9乘法口诀表:
// 1*1=1
// 2*1=2 2*2=4
// 3*1=3 3*2=6 3*3=9
// ...
int main()
{
    int i = 0;
    //确定打印9行:
    for(i=1; i<=9; i++)
    {
        //每一行的内容:
        int j = 1;
        for(j=1; j<=i; j++)
        {
            printf("%d*%d = %-2d\t",  i, j, i*j);
        }
    }
    return 0;
} */




/* //猜数字游戏:
//1.电脑会生成一个随机数
//2.猜数字
void menu()
{
    printf("*****************************\n");
    printf("****   1.PLAY   0.EXIT   ****\n");
    printf("*****************************\n");
}

void game()
{
    //1.生成一个随机数
    int ret = 0;
    int guess = 0;//接收猜的数字

    //拿时间戳来设置随机数的生成起始点//time_t time(time_t *timer)
    //ret = rand();//RAND_MAX - 生成0~32767之间的数字//required header:<stdlib.h>
    ret = rand()%100+1;  //生成1~100之间 随机数!!
    //printf("%d\n", ret);//看看能不能出随机数
    //2.猜数字
    while(1)// 1为真 进入循环
    {
        printf("请猜数字:>");
        scanf("%d\n", &guess);
        if(guess>ret)//ret是随机数
        {
            printf("猜大了\n");
        }
        else if(guess<ret)
        {
            printf("猜小了\n");
        }
        else
        {
            printf("恭喜你!猜对了\n");
            break;
        }
    }
}

int main()
{
    //do...while循环(至少进去一次// do的内容: for starting the game)
    int input = 0;
    srand((unsigned int)time(NULL));//初始化随机数发生器, use it before calling [rand()]//不然每次生成的数字都是一样的
    //                     //NULL:空指针

    do 
    {
       menu();//一个函数
       printf("请选择:> ");
       scanf("%d", &input);//记得input的那下操作要取地址(&)
       switch(input)//input那下操作的各种cases
       {
           case 1://input 是 1
                game();//(当前选了1 -> 玩游戏)//一个函数
                break;
           case 0:
                printf("退出游戏\n");
                break;
           default://不是1/0
                printf("选择错误\n");
                break;
       }
    }while (input);
  
    return 0;
} */


/* //关机程序:
int main()
{
    char input[20] = {0};

    system("shutdown -s -t 60");//"shoutdown -s -t 60"关机指令//system() - 执行系统命令
 again:
    printf("请注意,你的电脑将在一分钟内关机,如输入:我真帅,就取消关机\n请输入:>");
    scanf("%s", input);
    if(strcmp(input, "我真帅") == 0)//输入了我是猪
    {
        system("shutdown -a");
    }
    else
    {
        goto again;
    }
    return 0;
} */














//函数:
//1.库函数
//2.自定义函数

/* //memset(内存设置)
int main()
{
    char arr[] = "hello world";
    memset(arr, '*', 5);//destination ; 要改成的东西; (first)no. of bytes
    printf("%s\n", arr);//打印结果:***** world
    return 0;
} */

/* //Swap(交换):

//这种写法是不行的,因为 xy ab的地址不一样 swap 也只是 swap了xy instead of ab
//
//当实参(ab)传给形参(xy)的时候
//形参其实是实参的一份临时拷贝
//所以对形参(xy)的修改是不会改变实参(ab)的
//
void Swap(int x, int y)//当不需要返回值的时候就用 void(空的)
{
    int tmp = 0;
    tmp = x;
    x = y;//a换成b
    y = tmp;//b换成tmp 而 tmp已经是a
}

//这种取地址的写法才行
void Swap2(int* pa, int* pb)
{
    int tmp = 0;
    tmp = *pa ;
    *pa = *pb;
    *pb = tmp;
}

int main()
{
    int a = 10;
    int b = 20;
    printf("a=%d  b=%d\n", a, b);
    //Swap(a, b);//调用Swap函数(its an example of 传值调用)
    Swap2(&a, &b);//调用Swap2函数(its an example of 传址调用)
    printf("a=%d  b=%d\n", a, b);
    return 0;
//swap打印结果: a=10  b=20  
//             a=10  b=20
//swap2打印结果:a=10  b=20
//             a=20  b=10
}

//Correction: for Swap2()
// int main()
// {
//     int a = 10;
//     int* pa = &a;// pa:指针变量 int* 对应 &
//     *pa = 20;//解引用操作
//     printf("%d\n", a);
//     int b = 20;
//     return 0;
// } */

/* //用函数的方法打印100~200之间的素数 vs. 第480行
int is_prime(int n)
{
    int j = 0;
    for(j=2; j<n; j++)
    {
        if(n%j==0)
        return 0;
    }

    return 1;//j是素数的意思
}
int main()
{
    int i = 0;
    for(i=100; i<=200; i++)
    {
        if(is_prime(i)==1)//判断i是不是素数
        printf("%d\n", i);
    }
    return 0;
} */

/* //用函数的方法打印1000~2000年的闰年(leap year) vs 440
int is_leap_year(int y)
{
    if((y%4==0 && y%100!=0) || y%400==0)
        return 1;
    else 
        return 0;
}
int main()
{
    int year = 0;
    for(year=1000; year<=2000; year++)
    {
        if(1 == is_leap_year(year))
        {
            printf("%d\n",year);
        }
    }

    return 0;
} */

/* //用函数的方法 在一个数组里找特定数字:if找到了就返回这个数的下标,if找不到 就返回-1
int binary_search(int arr[], int k, int sz)
{
        int left = 0;//左下标
        int right = sz-1;//右下标
        
    while(left<=right)
    {
        int mid = (left+right)/2;//中间元素的下标(每次都不一样,所以要放在循环里)
        if(arr[mid]<k)//arr[mid]是指:中间这个元素
        {
            left = mid+1;
        }
        else if(arr[mid]>k)
        {
            right = mid-1;
        }
        else
        {
            return mid;//返回这个下标(找到了)
        }
    }
    return -1;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int k = 7;//要找 7
    int sz = sizeof(arr)/sizeof(arr[0]);
    
    int ret = binary_search(arr, k, sz);
    if(ret==-1)
    {
        printf("找不到该数字\n");
    }
    else
    {
        printf("找到了,下标是: %d\n", ret);
    }
    return 0;
}
 */
 

/* //调用函数,使得num每次增加1:
void Add(int* p)
{
    (*p)++;//加()
}
int main()
{
    int num = 0;
    Add(&num);//因为要改变原本的值 ->取地址
    printf("num = %d\n", num);//1
    Add(&num);
    printf("num = %d\n", num);//2
    Add(&num);
    printf("num = %d\n", num);//3

    return 0;
} */

/* //链式函数
int main()
{
    printf("%d", printf("%d", printf("%d", 43)));//打印结果:4321
//  each of these functions returns the no. of characters printed, or a -ve value if an error occurs.
//所以思路是43 2 1(倒着想)
    return 0;
} */

/* #include "add.h"//引入自己写的函数要用""//切换到powershell输出!(output/main)
int main()
{
    int a = 10;
    int b = 20;
    //函数调用
    int sum = Add(a, b);
    printf("%d\n", sum);
    return 0;
} */


//递归recursion:
//递归的限制条件:
//1. 存在限制条件,当满足这个限制条件的时候,递归便不再继续
//2. 每次递归调用后就会越来越接近这个限制条件
// int main()
// {
//     printf("呵呵\n" );
//     main();//这样会stack overflow栈溢出
//     return 0;
// }

//接收一个整型值,按照顺序打印它的每一位. e.g input:1234 output: 1 2 3 4.
// void print(int n)//1234
// {
//     if(n>9)//两位数或以上
//     {
//         print(n/10);//每次拨一位
//     }
//     printf("%d ", n%10);//然后就可以打印被拨的那位了
// }
// int main()
// {
//     unsigned int num = 0;
//     scanf("%d", &num);//1234
//     //递归
//     print(num);
//     return 0;
// }

//计算字符串长度(不创建临时变量) using recursion
// int my_strlen(char* str)//带*就是传的是整个数组的指针，不带*就是传的字符串首元素的地址
// {
//     if(*str != '\0')
//     {
//         return 1+my_strlen(str+1);
//     }
//     else
//         return 0;
//     //计算字符串的长度
//     // int count = 0;
//     // while(*str !='\0')//没到头
//     // {
//     //     count++;
//     //     str++;
//     // }
//     // return count;
// }
// int main()
// {
//     char arr[] = "bit";
//     int len = my_strlen(arr);//arr是数组,数组传参,传过去的不是整个数组,而是首元素的地址
//     printf("len = %d\n", len);
//     return 0;
// }

/* //求n的阶乘
int Fac1(int n)
{
    int i = 0;
    int ret = 1;
    for (i=1; i<=n; i++)
    {
        ret *= i;
    }
    return ret;
}
int Fac2(int n)
{
    if(n<=1)
        return 1;
    else
        return n*Fac2(n-1);
}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fac2(n);
    printf("%d\n", ret);
    return 0;
} */

/* //斐波那契数列(1 1 2 3 5 8 13 21 34 55...)
//描述第n个斐波那契数
//这种方法效率极低, 因为重复计算了
int Fib(int n)
{
    if(n<=2)
        return 1;
    else
        return Fib(n-1)+Fib(n-2); 
}
//method 2(找规律):
int Fib2(int n)
{
     int a = 1;
     int b = 1;
     int c = 1;

     while(n>2)
     {
         c = a+b;
         a = b;
         b = c;
         n--;
     }
return c;

}
int main()
{
    int n = 0;
    int ret = 0;
    scanf("%d", &n);
    ret = Fib2(n);
    printf("ret = %d\n", ret);
    return 0;
} */

//汉诺塔问题
//青蛙跳台阶问题



//-----------------------------------------------------

/* 一维数组://在地址中是连续存放的//[]的数字是放下标(start from 0)
int main()
{
    // int arr[10] = {1, 2 ,3};//不完全初始化, 剩下的元素默认为0
    // char arr2[5] = {'a', 'b'};//注意'',剩下的元素默认为0
    // char arr3[5] = "ab";//ab\0,剩下的两个元素默认为0
    char arr4[] = "abcdef";
    printf("%d\n", sizeof(arr4));//计算arr4所占空间大小=7(\0占了一个 )(单位:字节byte)
    printf("%d\n", strlen(arr4));//求 字符串 长度=6(不算\0)
    return 0;
}

int main()
{
    char arr[] = "abc";
    char arr2[] = {'a', 'b', 'c'};
    printf("%d\n", sizeof(arr));//4
    printf("%d\n", sizeof(arr2));//3
    printf("%d\n", strlen(arr));//3
    printf("%d\n", strlen(arr2));//random value,因为不知道什么时候遇到\0
    return 0;
} */

/* //二维数组://在地址中也是连续储存的(变一条)
int main()
{
    int arr[3][4] = {1, 2, 3, 4 ,5};//[行放的数][列放的数]
    int arr[][4] ={1, 2, 3, 4, 5, 6, 7, 8}//行的初始化可以省略,但列不行
    return 0;
} */


/* //数组作为函数参数:
void bubble_sort(int arr[], int sz)
{
    //确定冒泡排序的趟数(n-1)
    int i = 0;
    for( i=0; i<sz-1 ; i++)//范围
    {
        int flag = 1;//假设这一趟已经是有序,就不需要掉位了
        //每一趟冒泡排序
        int j = 0;
        for(j=0; j<sz-1-i ; j++)// 掉位操作
        {
            if(arr[j] > arr[j+1])//e.g 9 8
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                flag = 0;//本趟不完全有序
            }
        }
        if (flag==1)//比完所有数据
        {
            break;
        }
    }
}
int main()
{
    int arr[] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};
    int i = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);//   .........所以在这里算好元素个数
    //                                           .
    //对arr进行排序,排成升序                       .
    //arr是数组, 传过去的是arr首元素的地址 &arr[0]  .
    bubble_sort(arr, sz);//冒泡排序函数
    for(i=0; i<sz; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;

//general speaking: 数组名arr就是首元素地址(but 有两个例外)
//1.sizeof(数组名) - 这是计算整个数组的size(单位:字节)
//2.&数组名 - 取出的是整个数组的地址,就算result和arr一样, 但意思完全不同
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    printf("%p\n", arr);
    printf("%p\n", &arr[0]);
    //result: 0061FF0C 都是一样的
    printf("%d\n", *arr);// result: 1
    return 0;
}

}*/


//数组的应用实例:       三子棋













