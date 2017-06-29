#include "init.h"
#include "usmart.h"
#include "usart.h"

void PwmInit()
{
#if TIM_IT2 
	HAL_TIM_Base_Start_IT(&htim2);
	HAL_TIM_IC_Start_IT(&htim2,TIM_CHANNEL_2);
#endif
#if TIM_IT3 	
	HAL_TIM_Base_Start_IT(&htim3);
	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_1);
#endif
}

void UartInit()
{
#if UART_IT1
	HAL_UART_Receive_IT(&huart1, (uint8_t*)uart1_buff, 1);
#endif
}

void InitAll()
{
	UartInit();
	PwmInit();
	printf("init finish!\n");
}
