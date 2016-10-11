#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(void)
{
    int num1, num2, num3, num4, num5, num6, num7, f1, f2, f3, result ; // f1,f2,f3 are factorial //

    float num10, pi, sum, num8, num9 ;

    char ch='k' ;


    while((ch!='e') && (ch!='E')) {

    printf("\n\nPress P or p for Prime Number \n");
    printf("Press L or l for Liebniz Series \n");
    printf("Press C or c for Combinaions \n");
    printf("Press E or e for Exit \n\n" );

    printf("Enter Your Choice:");

    scanf("%s", &ch);



        switch(ch) {

            case 'p' :
            case 'P' : { printf("Enter Your Number:");
                        scanf("%d", &num2);


                        if(num2<0)
                            printf("You have entered the wrong number. please enter positif number.");

                            else printf("\nPrime numbers:", num2);

                        for(num1=2; num1 <= num2; num1 = num1+1) //if the number entered is prime, the number prints on the screen//
                        {

                            num4=1;

                            num3=2;

                            while((num3 < num1) && (num4==1))
                            {
                                if((num1 % num3) ==0 )

                                    num4=0;

                                    num3=num3+1;
                            }

                                    if(num4 == 1)

                                        printf("%d,", num1);



                        }
                        break;

                }
            case'L' :
            case'l' : {

                        printf("Enter Your Number:");

                        scanf("%f", &num8);

                      {
                                    sum = 0.0;

                                    num9 = -1.0;

                                while(num8>=0)
                                {
                                    num10 = pow(num9,num8) / (2*num8 +1);

                                    sum = sum +num10;

                                    num8 = num8-1;
                                }

                                    pi = sum * 4;

                                    printf("Our approximate pi value: %.2f\n", pi); //display two digits after the decimal point
                    }
                        break;

            }


            case'C' :
            case'c' :   printf("Enter your numbers:");

                        scanf("%d%d", &num5,&num6);

                              {

                                    num7 = num5-num6 ;

                                    f1 = num5 ;

                                    f2 = num6 ;

                                    f3 = num7 ;

                                    if(num5==0)

                                        f1=1;

                                        else while(num5>2) {

                                                    num5 = num5-1 ;

                                                    f1 = f1*num5 ;

                                        }

                                    if(num6==0)

                                        f2=1;

                                        else while(num6>2) {

                                            num6 = num6-1 ;

                                            f2 = f2*num6 ;

                                        }

                                    if(num7==0)

                                        f3 = 1 ;

                                        else while(num7>2) {

                                            num7 = num7-1 ;

                                            f3 = f3*num7 ;

                                        }

                                        result= f1 / (f2*f3);

                                        printf("Result:%d", result);


                        break;
            }


            case'E':
            case'e': {
                        break;
            }




            default : printf("You have entered the wrong character. Please enter one of the character in the menu.");


                }
            }

            getchar();



          return 0;
}
