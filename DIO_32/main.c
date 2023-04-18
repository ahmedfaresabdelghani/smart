#include "STD_TYPES.h"
#include "BIT_MATH.h"
#include"DIO_interface.h"


void main(void)
{
	u8 Local_u8InputValue=1;
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN0,DIO_u8PIN_INPUT);
	DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN0,DIO_u8PIN_HIGH);
	DIO_u8SetPinDirection(DIO_u8PORTC,DIO_u8PIN1,DIO_u8PIN_OUTPUT);
    while(1)
    {
    	DIO_u8GetPinValue(DIO_u8PORTC,DIO_u8PIN0,&Local_u8InputValue);
    	if(Local_u8InputValue==0)
    	{
    		DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN1,DIO_u8PIN_HIGH);
    	}
    	else
    	{
    		DIO_u8SetPinValue(DIO_u8PORTC,DIO_u8PIN1,DIO_u8PIN_LOW);
    	}

    }




}

