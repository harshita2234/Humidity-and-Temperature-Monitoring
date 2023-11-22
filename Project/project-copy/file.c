#include <LPC17xx.h>
unsigned int j,i,d;
unsigned char x;
int  main()
{

	SystemInit();
	SystemCoreClockUpdate();


	LPC_PINCON->PINSEL0 &= 0XFF0000FF;
	LPC_PINCON->PINSEL1 &= 0XFFFFF3FF;
	LPC_GPIO0->FIODIR |= 0XFF<<4 |0X0<<21;
	//LPC_GPIO0->FIODIR = 0X0<<21;

	while(1)
		{
			if(LPC_GPIO0->FIOPIN & 0x1<<21)
			{
					x++;
			}
			
			else
			{
				x--;
			}
				LPC_GPIO0->FIOPIN=x<<4;  //DISPLAY
				for(i=0;i<1000000;i++);					
			}

}