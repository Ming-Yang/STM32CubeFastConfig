#include "interrupt.h"

#ifdef UART_IT1
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart)
{
  /* Prevent unused argument(s) compilation warning */
  UNUSED(huart);
  HAL_UART_Receive_IT(&huart1, (uint8_t*)uart1_buff, 1);
	
	usmart_scan();
}
#endif
