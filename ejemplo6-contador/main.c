/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */

/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MPU_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */
void num2disp(uint8_t num)
{
	switch(num)
	{
	case 0:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 0);
		break;
	case 1:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 0);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 0);
		break;
	case 2:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 0);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 3:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 4:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 0);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 5:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 0);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 6:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 0);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 7:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 0);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 0);
		break;
	case 8:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 1);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 1);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	case 9:
		HAL_GPIO_WritePin(DISP_A_GPIO_Port, DISP_A_Pin, 1);
		HAL_GPIO_WritePin(DISP_B_GPIO_Port, DISP_B_Pin, 1);
		HAL_GPIO_WritePin(DISP_C_GPIO_Port, DISP_C_Pin, 1);
		HAL_GPIO_WritePin(DISP_D_GPIO_Port, DISP_D_Pin, 0);
		HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, 0);
		HAL_GPIO_WritePin(DISP_F_GPIO_Port, DISP_F_Pin, 1);
		HAL_GPIO_WritePin(DISP_G_GPIO_Port, DISP_G_Pin, 1);
		break;
	}
}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{

  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MPU Configuration--------------------------------------------------------*/
  MPU_Config();

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */
  uint32_t time = 0, counter_time = 0, sweep_time = 0;
  uint8_t counter = 0, t_act = 0;
  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
	  time = HAL_GetTick();
	  if(time - counter_time>1000){
		  counter = (counter + 1)%100;
		  counter_time = time;
	  }

	  if(time - sweep_time >= 5){
		  switch(t_act)
		  {
		  case 0:
			  HAL_GPIO_WritePin(T_DEC_GPIO_Port, T_DEC_Pin, 1);
			  HAL_GPIO_WritePin(T_UNI_GPIO_Port, T_UNI_Pin, 0);
			  num2disp(counter/10);
			  t_act = 1;
			  break;
		  case 1:
			  HAL_GPIO_WritePin(T_DEC_GPIO_Port, T_DEC_Pin, 0);
			  HAL_GPIO_WritePin(T_UNI_GPIO_Port, T_UNI_Pin, 1);
			  num2disp(counter%10);
			  t_act = 0;
			  break;
		  }
		  sweep_time = time;
	  }

    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Supply configuration update enable
  */
  HAL_PWREx_ConfigSupply(PWR_LDO_SUPPLY);

  /** Configure the main internal regulator output voltage
  */
  __HAL_PWR_VOLTAGESCALING_CONFIG(PWR_REGULATOR_VOLTAGE_SCALE2);

  while(!__HAL_PWR_GET_FLAG(PWR_FLAG_VOSRDY)) {}

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_DIV1;
  RCC_OscInitStruct.HSICalibrationValue = 64;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
  RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSI;
  RCC_OscInitStruct.PLL.PLLM = 4;
  RCC_OscInitStruct.PLL.PLLN = 12;
  RCC_OscInitStruct.PLL.PLLP = 1;
  RCC_OscInitStruct.PLL.PLLQ = 4;
  RCC_OscInitStruct.PLL.PLLR = 2;
  RCC_OscInitStruct.PLL.PLLRGE = RCC_PLL1VCIRANGE_3;
  RCC_OscInitStruct.PLL.PLLVCOSEL = RCC_PLL1VCOWIDE;
  RCC_OscInitStruct.PLL.PLLFRACN = 0;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }

  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2
                              |RCC_CLOCKTYPE_D3PCLK1|RCC_CLOCKTYPE_D1PCLK1;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
  RCC_ClkInitStruct.SYSCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_HCLK_DIV2;
  RCC_ClkInitStruct.APB3CLKDivider = RCC_APB3_DIV2;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_APB1_DIV2;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_APB2_DIV2;
  RCC_ClkInitStruct.APB4CLKDivider = RCC_APB4_DIV2;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_1) != HAL_OK)
  {
    Error_Handler();
  }
}

/**
  * @brief GPIO Initialization Function
  * @param None
  * @retval None
  */
static void MX_GPIO_Init(void)
{
  GPIO_InitTypeDef GPIO_InitStruct = {0};
/* USER CODE BEGIN MX_GPIO_Init_1 */
/* USER CODE END MX_GPIO_Init_1 */

  /* GPIO Ports Clock Enable */
  __HAL_RCC_GPIOC_CLK_ENABLE();
  __HAL_RCC_GPIOB_CLK_ENABLE();
  __HAL_RCC_GPIOD_CLK_ENABLE();
  __HAL_RCC_GPIOA_CLK_ENABLE();
  __HAL_RCC_GPIOE_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, LED_GREEN_Pin|DISP_D_Pin|LED_RED_Pin|DISP_B_Pin
                          |DISP_C_Pin|DISP_G_Pin|T_DEC_Pin|T_UNI_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOC, DISP_A_Pin|DISP_F_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(DISP_E_GPIO_Port, DISP_E_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(LED_YELLOW_GPIO_Port, LED_YELLOW_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin : B1_Pin */
  GPIO_InitStruct.Pin = B1_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_INPUT;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(B1_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pins : LED_GREEN_Pin DISP_D_Pin LED_RED_Pin DISP_B_Pin
                           DISP_C_Pin DISP_G_Pin T_DEC_Pin T_UNI_Pin */
  GPIO_InitStruct.Pin = LED_GREEN_Pin|DISP_D_Pin|LED_RED_Pin|DISP_B_Pin
                          |DISP_C_Pin|DISP_G_Pin|T_DEC_Pin|T_UNI_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

  /*Configure GPIO pins : STLK_VCP_RX_Pin STLK_VCP_TX_Pin */
  GPIO_InitStruct.Pin = STLK_VCP_RX_Pin|STLK_VCP_TX_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_AF_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  GPIO_InitStruct.Alternate = GPIO_AF7_USART3;
  HAL_GPIO_Init(GPIOD, &GPIO_InitStruct);

  /*Configure GPIO pins : DISP_A_Pin DISP_F_Pin */
  GPIO_InitStruct.Pin = DISP_A_Pin|DISP_F_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOC, &GPIO_InitStruct);

  /*Configure GPIO pin : DISP_E_Pin */
  GPIO_InitStruct.Pin = DISP_E_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(DISP_E_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : DISP_DOT_Pin */
  GPIO_InitStruct.Pin = DISP_DOT_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_ANALOG;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  HAL_GPIO_Init(DISP_DOT_GPIO_Port, &GPIO_InitStruct);

  /*Configure GPIO pin : LED_YELLOW_Pin */
  GPIO_InitStruct.Pin = LED_YELLOW_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(LED_YELLOW_GPIO_Port, &GPIO_InitStruct);

/* USER CODE BEGIN MX_GPIO_Init_2 */
/* USER CODE END MX_GPIO_Init_2 */
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

 /* MPU Configuration */

void MPU_Config(void)
{
  MPU_Region_InitTypeDef MPU_InitStruct = {0};

  /* Disables the MPU */
  HAL_MPU_Disable();

  /** Initializes and configures the Region and the memory to be protected
  */
  MPU_InitStruct.Enable = MPU_REGION_ENABLE;
  MPU_InitStruct.Number = MPU_REGION_NUMBER0;
  MPU_InitStruct.BaseAddress = 0x0;
  MPU_InitStruct.Size = MPU_REGION_SIZE_4GB;
  MPU_InitStruct.SubRegionDisable = 0x87;
  MPU_InitStruct.TypeExtField = MPU_TEX_LEVEL0;
  MPU_InitStruct.AccessPermission = MPU_REGION_NO_ACCESS;
  MPU_InitStruct.DisableExec = MPU_INSTRUCTION_ACCESS_DISABLE;
  MPU_InitStruct.IsShareable = MPU_ACCESS_SHAREABLE;
  MPU_InitStruct.IsCacheable = MPU_ACCESS_NOT_CACHEABLE;
  MPU_InitStruct.IsBufferable = MPU_ACCESS_NOT_BUFFERABLE;

  HAL_MPU_ConfigRegion(&MPU_InitStruct);
  /* Enables the MPU */
  HAL_MPU_Enable(MPU_PRIVILEGED_DEFAULT);

}

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */
