/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define RST1_Pin GPIO_PIN_0
#define RST1_GPIO_Port GPIOC
#define RST2_Pin GPIO_PIN_1
#define RST2_GPIO_Port GPIOC
#define AN0_Pin GPIO_PIN_4
#define AN0_GPIO_Port GPIOA
#define AN1_Pin GPIO_PIN_0
#define AN1_GPIO_Port GPIOB
#define PWM_A_Pin GPIO_PIN_10
#define PWM_A_GPIO_Port GPIOB
#define LED_Pin GPIO_PIN_8
#define LED_GPIO_Port GPIOA
#define INT0_Pin GPIO_PIN_10
#define INT0_GPIO_Port GPIOA
#define INT1_Pin GPIO_PIN_3
#define INT1_GPIO_Port GPIOB
#define PWM_B_Pin GPIO_PIN_4
#define PWM_B_GPIO_Port GPIOB
#define CS1_Pin GPIO_PIN_6
#define CS1_GPIO_Port GPIOB
#define CS0_Pin GPIO_PIN_7
#define CS0_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
