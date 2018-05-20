#include "LPC11xx.h"                    // Device header
int main()
{
LPC_GPIO2->DIR = 0xFF;   //将GPIO2设置成输出
LPC_GPIO2->DATA = 0x55;





}