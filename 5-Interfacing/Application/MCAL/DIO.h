#ifndef DIO_H_
#define DIO_H_

typedef enum Port_t{
	porta,
	portb,
	portc,
	portd
}Port_t;

typedef enum Pin_t{
	pin0,
	pin1,
	pin2,
	pin3,
	pin4,
	pin5,
	pin6,
	pin7
}Pin_t;

typedef enum Dir_t{
	input,
	output,
	input_pullup
}Dir_t;

typedef enum Value_t{
	High,
	Low
}Value_t;

Error_t DIO_SetPinDir(Port_t port, Pin_t pin, Dir_t dir);
Error_t DIO_Write(Port_t port, Pin_t pin, Value_t value);
Error_t GET_PIN(Port_t port , Pin_t pin , u8* Readed);

#endif /* DIO_H_ */
