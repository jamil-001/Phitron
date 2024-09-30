// #include<stdio.h>
// int main(){
//     int day;
//     scanf("%d",&day);
//     switch (day)
//     {
//     case 1:
//         printf("Satuarday\n");
//         break;
//     case 2:
//          printf("SUNDAY\n");
//          break;
//     case 3:
//          printf("Monday\n");
//          break;
//     case 4:
//         printf("Thusday\n");
//         break;
//     case 5:
//         printf("Wednesday\n");
//         break;
//     case 6:
//         printf("Thirsday\n");
//         break;
//     case 7:
//          printf("Friday\n");
//          break;
//     default:
//         printf("Wrong day\n");

//     }
    
//     return 0;
// }
#include <stdio.h>
int main()
{
    int a = 10;
    int x = a++;
    --x;
    a--;
    int y = --x;
    printf("%d", y--);
}