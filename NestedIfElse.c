#include<stdio.h>
#include<stdbool.h>
int main(){
/*
     use nested if else

*/
    int tourDays = 6;
    if(tourDays == 2){
        bool isBootAvailable = false;
        if (isBootAvailable)
        {
            printf("Going to tanguar haur\n");
        }
        else{
            printf("Going to Shrimangal\n");
        }
    }
    else if(tourDays == 4)
    {
      bool isShipAvailable = false;
      if(isShipAvailable)
      {
        printf("Going to Saint Martin\n");
      }
      else{
        printf("Going to Cox bazaar\n");
      }
    }
    else{

        printf("Ghore bose tako");
    }
 return 0;       
    }