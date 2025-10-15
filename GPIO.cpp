#include<stdio.h>
#include<stdlib.h>
typedef enum{GPIO_Speed_2MHz,
    GPIO_Speed_10MHz, 
    GPIO_Speed_50MHz}Speed;
    

typedef struct{
Speed GPIO_Speed;
}G;


  void GPIO(G*g);


    
int main()
{G  myG;
GPIO(&myG);
	
	
	return 0;
}
void GPIO(G*g)
{
    g->GPIO_Speed = GPIO_Speed_2MHz;
}
