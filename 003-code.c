//代码显示
//打印小飞机
/我的代码/#include<stdio.h>
int main()
{


    printf(" \n\
             @\n\
            / \\ \n\
            * * \n\
            * * \n\
            * * \n\
          * * * * \n\
     * * * * * * * * * *\n\
  * * * * * * * * * * * * *\n\
            * *\n\
            * *\n\
          * * * * \n\
        * * * * * *\n\
     ");
     return 0;
}

//第二种方式，使用多个printf函数将每行内容都打印出来
#include <stdio.h>

int main()
{
        printf("\n");
        printf("         @\n");
        printf("        / \\\n");
        printf("        * *\n");
        printf("        * *\n");
        printf("        * *\n");
        printf("        * *\n");
        printf("    * * * * * *\n");
        printf("  * * * * * * * *\n");
        printf("* * * * * * * * * *\n");
        printf("        * *\n");
        printf("        * *\n");
        printf("      * * * *\n");
        printf("    * * * * * *\n");

        return 0;

}


//或者是，在一个printf中可以打出>>多对引号<<来分行输出代码
#include <stdio.h>

int main()
{
        printf("\n"
        "         @\n"
        "        / \\\n"
        "        * *\n"
        "        * *\n"
        "        * *\n"
        "        * *\n"
        "    * * * * * *\n"
        "  * * * * * * * *\n"
        "* * * * * * * * * *\n"
        "        * *\n"
        "        * *\n"
        "      * * * *\n"
        "    * * * * * *\n");

        return 0;

}
