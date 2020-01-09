#ifndef __COLOR_LED_H
#define	__COLOR_LED_H

#include "stm32f4xx.h"

  /*
	������������������������������������
  �����̵�LED�Ƹ�ͨ��ʹ�õĲ���ͬһ����ʱ��
  ���Ӳ��ʱ����ʹ��ͬһ����ʱ����������յ�ƣ��򻯴���
	��ʹ�õ�Ӳ����ͬһ����ʱ������Ҫ����Դ�����ͷ�ļ�������ֱ���޸ĺ���ʵ��
	�ر��Ƕ�ʱ����ʼ�����֡�
	������������������������������������
*/
/********************��ʱ��ͨ��**************************/
#define COLOR_TIM_GPIO_CLK             (RCC_AHB1Periph_GPIOF)

/************���***************/
#define COLOR_RED_TIM           						TIM10
#define COLOR_RED_TIM_CLK       						RCC_APB2Periph_TIM10
#define COLOR_RED_TIM_APBxClock_FUN        RCC_APB2PeriphClockCmd
/*����˵����c�ļ�*/
/*����ͨ�ö�ʱ����ʱ��ΪHCLK/4������ΪHCLK/2��ע��Ҫ������ͨ���Ķ�ʱ��Ƶ������Ϊһ��*/
#define COLOR_RED_TIM_PRESCALER						(((SystemCoreClock)/1000000)*30-1)

/************�̵�***************/
#define COLOR_GREEN_TIM           						TIM11
#define COLOR_GREEN_TIM_CLK       						RCC_APB2Periph_TIM11
#define COLOR_GREEN_TIM_APBxClock_FUN        RCC_APB2PeriphClockCmd
/*����ͨ�ö�ʱ����ʱ��ΪHCLK/4������ΪHCLK/2��ע��Ҫ������ͨ���Ķ�ʱ��Ƶ������Ϊһ��*/
#define COLOR_GREEN_TIM_PRESCALER						(((SystemCoreClock)/1000000)*30-1)

/************����***************/
#define COLOR_BLUE_TIM           							TIM13
#define COLOR_BLUE_TIM_CLK       						RCC_APB1Periph_TIM13
#define COLOR_BLUE_TIM_APBxClock_FUN        RCC_APB1PeriphClockCmd
/*����ͨ�ö�ʱ����ʱ��ΪHCLK/4������ΪHCLK/2��ע��Ҫ������ͨ���Ķ�ʱ��Ƶ������Ϊһ��*/
#define COLOR_BLUE_TIM_PRESCALER						(((SystemCoreClock/2)/1000000)*30-1)



/************���***************/

#define COLOR_RED_PIN                  GPIO_Pin_6                 
#define COLOR_RED_GPIO_PORT            GPIOF                      
#define COLOR_RED_PINSOURCE						GPIO_PinSource6
#define COLOR_RED_AF										GPIO_AF_TIM10

#define  COLOR_RED_TIM_OCxInit                TIM_OC1Init            //ͨ����ʼ������
#define  COLOR_RED_TIM_OCxPreloadConfig       TIM_OC1PreloadConfig //ͨ���������ú���

//ͨ���ȽϼĴ�������TIMx->CCRx��ʽ�ɷ��ʸüĴ����������µıȽ�ֵ������ռ�ձ�
//�Ժ��װ��ʹ��������ʽ��COLOR_TIMx->COLOR_RED_CCRx ���ɷ��ʸ�ͨ���ıȽϼĴ���
#define  COLOR_RED_CCRx                       	CCR1		

/************�̵�***************/
#define COLOR_GREEN_PIN                  GPIO_Pin_7                 
#define COLOR_GREEN_GPIO_PORT            GPIOF                      
#define COLOR_GREEN_PINSOURCE						GPIO_PinSource7
#define COLOR_GREEN_AF										GPIO_AF_TIM11

#define  COLOR_GREEN_TIM_OCxInit                TIM_OC1Init            //ͨ����ʼ������
#define  COLOR_GREEN_TIM_OCxPreloadConfig       TIM_OC1PreloadConfig //ͨ���������ú���

//ͨ���ȽϼĴ�������TIMx->CCRx��ʽ�ɷ��ʸüĴ����������µıȽ�ֵ������ռ�ձ�
//�Ժ��װ��ʹ��������ʽ��COLOR_TIMx->COLOR_GREEN_CCRx ���ɷ��ʸ�ͨ���ıȽϼĴ���
#define  COLOR_GREEN_CCRx                       CCR1

/************����***************/
#define COLOR_BLUE_PIN                  GPIO_Pin_8                 
#define COLOR_BLUE_GPIO_PORT            GPIOF                       
#define COLOR_BLUE_PINSOURCE						GPIO_PinSource8
#define COLOR_BLUE_AF										GPIO_AF_TIM13

#define   COLOR_BLUE_TIM_OCxInit              TIM_OC1Init            //ͨ����ʼ������
#define   COLOR_BLUE_TIM_OCxPreloadConfig    TIM_OC1PreloadConfig  //ͨ���������ú���

//ͨ���ȽϼĴ�������TIMx->CCRx��ʽ�ɷ��ʸüĴ����������µıȽ�ֵ������ռ�ձ�
//�Ժ��װ��ʹ��������ʽ��COLOR_TIMx->COLOR_BLUE_CCRx ���ɷ��ʸ�ͨ���ıȽϼĴ���
#define   COLOR_BLUE_CCRx                      CCR1


/************************************************************/

/* RGB��ɫֵ 24λ*/
#define COLOR_WHITE          0xFFFFFF
#define COLOR_BLACK          0x000000
#define COLOR_GREY           0xC0C0C0
#define COLOR_BLUE           0x0000FF
#define COLOR_RED            0xFF0000
#define COLOR_MAGENTA        0xFF00FF
#define COLOR_GREEN          0x00FF00
#define COLOR_CYAN           0x00FFFF
#define COLOR_YELLOW         0xFFFF00


void ColorLED_Config(void);
void SetRGBColor(uint32_t rgb);
void SetColorValue(uint8_t r,uint8_t g,uint8_t b);

#endif /* __COLOR_LED_H */
