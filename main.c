#include <stdio.h>

char arr[1024];
 int index = 0;
int main()
{

    while(1){
    printf("minganzifuguanlixitong\n");

    printf("1----tianjia\n");
    printf("2----shanchu\n");
    printf("3----xianshisuoyou\n");
    printf("4----dayiduanwenzi\n");
    printf("5----tuichu\n");

    printf("xuanzeguanlixitong\n");

    int code;
    scanf("%d", &code);

        if (code == 1)
        {
            printf("tianjiaminganzifu\n");
            char m;
            scanf("%c",&m);
            scanf("%c",&m);

            arr[index] = m;
            index++;
            printf("tinjiachenggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 2)
        {
            printf("shanchuminganzifu\n");
            index--;
            printf("shanchuchehnggong\n");
            char x;
            scanf("%c",&x);
            scanf("%c",&x);
        }
        if (code == 3)
        {

        }
        if (code == 4)
        {

        }
        if (code == 5)
        {

        }
    }

    return 0;
}