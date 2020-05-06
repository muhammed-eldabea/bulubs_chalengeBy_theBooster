#include <stdio.h>
#define  ON 1
#define OFF 0
#define blue 3


int main (void)
{
int Order_of_light_bulb[10] = {0} ;
int Bulbstate[10] = {0} ;
int number_of_bulbs=0 ;
int numberOFmoment=0 ;
int flag = 0 ;
printf("Enter the number of bulbs >> \t ")  ;
scanf("%d",&number_of_bulbs) ;

for (int inc = 0 ; inc<number_of_bulbs;inc++)
{
    scanf("%d",&Order_of_light_bulb[inc]) ;
}
for (int inc = 0 ; inc<number_of_bulbs;inc++)
{
    Order_of_light_bulb[inc] =Order_of_light_bulb[inc]-1 ;
}


for ( int inc=0 ; inc<number_of_bulbs ; inc++)
{

int current_bulb=Order_of_light_bulb[inc] ;

Bulbstate[current_bulb]=ON ;

for (int j=current_bulb-1 ; j>=0;j--)
{
if(Bulbstate[j]!=ON)
{
    flag=1 ;
}

}

if(flag==0)
{
    numberOFmoment++ ;
}

flag=0 ;



}



printf("%d",numberOFmoment) ;


return 0 ;




}
