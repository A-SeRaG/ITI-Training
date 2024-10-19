#include "../COMMON/DATA_TYPE.h"
#include "../COMMON/BIT_MATH.h"
#include "../MCAL/ATMEGA32.h"
#include "../MCAL/DIO.h"
#include "SEGMENT7.h"

void SeGMENT()
{
	DDRA = 0xFF;
	DDRB = 0xFF;
	u8 SEG[] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

	while(1)
	{
		for(int i = 0; i < 10; i++)
		{
			PORTA = SEG[i];
			for(int j = 0; j < 10; j++)
			{
				PORTB = SEG[j];
				_delay_ms(400);
			}
			_delay_ms(400);
		}
	}
}
