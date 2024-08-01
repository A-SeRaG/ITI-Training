#include "../COMMON/DATA_TYPE.h"
#include "../COMMON/BIT_MATH.h"
#include "ATMEGA32.h"
#include "DIO.h"

Error_t DIO_SetPinDir(Port_t port, Pin_t pin, Dir_t dir)
{
	Error_t err = Success;
	switch (dir)
	{
	case input:
		switch (port)
		{
		case porta:
			CLR_BIT(DDRA, pin);
			CLR_BIT(PORTA, pin);
			break;
		case portb:
			CLR_BIT(DDRB, pin);
			CLR_BIT(PORTB, pin);
			break;
		case portc:
			CLR_BIT(DDRC, pin);
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
	case output:
		switch (port)
		{
		case porta:
			SET_BIT(DDRA, pin);
			break;
		case portb:
			SET_BIT(DDRB, pin);
			break;
		case portc:
			SET_BIT(DDRC, pin);
			break;
		case portd:
			SET_BIT(DDRD, pin);
			break;
		default:
			err = Fail;
		}
		break;
	case input_pullup:
		switch (port)
		{
		case porta:
			CLR_BIT(DDRA, pin);
			SET_BIT(PORTA, pin);
			break;
		case portb:
			CLR_BIT(DDRB, pin);
			SET_BIT(PORTB, pin);
			break;
		case portc:
			CLR_BIT(DDRC, pin);
			SET_BIT(PORTC, pin);
			break;
		case portd:
			CLR_BIT(DDRD, pin);
			SET_BIT(PORTD, pin);
			break;
		default:
			err = Fail;
		}
		break;
	default:
		err = Fail;
	}
	return err;
}

Error_t DIO_Write(Port_t port, Pin_t pin, Value_t value)
{
	Error_t err = Success;
	switch (value)
	{
	case High:
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
	case Low:
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
			CLR_BIT(PORTD, pin);
			break;
		default:
			err = Fail;
		}
		break;
	default:
		err = Fail;
	}
	return err;
}

Error_t GET_PIN(Port_t port, Pin_t pin, u8 *Readed)
{
	Error_t err = Success;
	switch (port)
	{
	case porta:
		*Readed = GIT_BIT(PINA, pin);
		break;
	case portb:
		*Readed = GIT_BIT(PINB, pin);
		break;
	case portc:
		*Readed = GIT_BIT(PINC, pin);
		break;
	case portd:
		*Readed = GIT_BIT(PIND, pin);
		break;
	default:
		err = Fail;
	}
	return err;
}
