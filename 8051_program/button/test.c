#include<regx51.h>

sbit led = P1^0;
sbit SW = P1^1;

void delay(int a)
{
    int j;
    int i;
    for(i=0;i<a;i++)
    {
        for(j=0;j<100;j++)
        {
        }
    }
}

void main()
{
	
	led = 0;
	
	while(1)
	{
		led = 1;
			delay(1000);
		led = 0;
			delay(1000);
		
		
		
	}
	
	
	
	
	
	
}