#include "../COMMON/DATA_TYPE.h"
#include "../COMMON/BIT_MATH.h"
#include "../MCAL/ATMEGA32.h"
#include "../MCAL/DIO.h"
#include "LED.h"

Error_t LED(Port_t port, Pin_t pin, Led_t led)
{
	Error_t err = Success;
	DDRA = 0xFF;
	DDRB = 0xFF;
	DDRC = 0xFF;
	DDRD = 0xFF;
	switch(led)
	{
	case on:
		switch (port)
		{
		case porta:
			SET_BIT(PORTA, pin);
			break;
		case portb:
			SET_BIT(PORTB, pin);
			break;
		case portc:
			SET_BIT(PORTC, pin);
			break;
		case portd:
			SET_BIT(PORTD, pin);
			break;
		default:
			err = Fail;
		}
		break;
	case off:
		switch (port)
		{
		case porta:
			CLR_BIT(PORTA, pin);
			break;
		case portb:
			CLR_BIT(PORTB, pin);
			break;
		case portc:
			CLR_BIT(PORTC, pin);
			break;
		case portd:
			CLR_BIT(DDRD, pin);
			CLR_BIT(PORTD, pin);
			break;
		default:
			err = Fail;
		}
		break;
	default: err = Fail;
	}
	return err;
}
