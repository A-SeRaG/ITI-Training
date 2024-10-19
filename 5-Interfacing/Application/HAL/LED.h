
#ifndef LED_H_
#define LED_H_

typedef enum Led_t{
	on,
	off
}Led_t;

Error_t LED(Port_t port, Pin_t pin, Led_t led);

#endif /* LED_H_ */
