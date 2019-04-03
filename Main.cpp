
#include "string.h"
#include "Math.h"
#include "windows.h"
#include "Com.h"

#include<stdio.h>
#include<conio.h>
#include "REG.h"

signed short sReg[REGSIZE]={0};
char ModbusReadReg(char ComPort,char Addr, unsigned short usReg, unsigned short usRegNum,short sRegs[]);

void main(void)
{	
	int iComPort = 4;
	int iBaud = 9600;
	int iAddress = 0x50;
	float a[3],w[3],Angle[3],h[3];
	printf("请输入串口号:");
	scanf("%d",&iComPort);
	printf("请输入波特率:");
	scanf("%d",&iBaud);

	OpenCOMDevice(iComPort,iBaud);
	while (1)
    {
		
		ModbusReadReg(iComPort,iAddress, AX , 13,&sReg[AX]);
		for (int i = 0;i<3;i++)
		{
			a[i] = sReg[AX+i]/32768.0*16.0;
			w[i] = sReg[GX+i]/32768.0*2000.0;
			Angle[i] = sReg[Roll+i]/32768.0*180.0;
			h[i] = sReg[HX+i];
		}
		printf("a:%.2f %.2f %.2f\r\n",a[0],a[1],a[2]);
		printf("w:%.2f %.2f %.2f\r\n",w[0],w[1],w[2]);
		printf("Angle:%.1f %.1f %.1f\r\n",Angle[0],Angle[1],Angle[2]);
		printf("h:%.0f %.0f %.0f\r\n\r\n",h[0],h[1],h[2]);
        Sleep(100);
}

   
}