#include "LPC11xx.h"                    // Device header
int main()
{
LPC_GPIO2->DIR = 0xFF;   //��GPIO2���ó����
LPC_GPIO2->DATA = 0x55;





}