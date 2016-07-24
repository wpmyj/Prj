#define STM32F10X_CL
#define  USART_TX_BUFFER_SIZE 100
#define  USART_RX_BUFFER_SIZE 100
#define  OSC_FREQ      ((uint32_t)8000000)
#define  Tos_TaskTotal            7      //����ش�С
#define  Tos_TaskStackDefSize     4000   //Ĭ�ϵ��������ջ��С
#define  Tos_RootTaskStackSize    1000
#define  Tos_DeviceTotal         5     //�豸�ش�С
#define  Tos_TaskWatchDog        8000   //��������λʱ��
#define  Tos_Cpu_Freq						72000000	 //ϵͳ����Ƶ��
#define  Board_Name            "��·CAN����" 
#define  CPU_Model             "STM32F103VET6" 
#define  FLASH_PARAM_PAGE	     254
#define IWDG_ENABLE 