#ifndef __AHRSREG_H
#define __AHRSREG_H

#define REGSIZE 0x80

#define SAVE 			0x00
#define CALSW 		0x01
#define RSW 			0x02
#define RRATE			0x03
#define BAUD 			0x04
#define AXOFFSET	0x05
#define AYOFFSET	0x06
#define AZOFFSET	0x07
#define GXOFFSET	0x08
#define GYOFFSET	0x09
#define GZOFFSET	0x0a
#define HXOFFSET	0x0b
#define HYOFFSET	0x0c
#define HZOFFSET	0x0d
#define D0MODE		0x0e
#define D1MODE		0x0f
#define D2MODE		0x10
#define D3MODE		0x11
#define D0PWMH		0x12
#define D1PWMH		0x13
#define D2PWMH		0x14
#define D3PWMH		0x15
#define D0PWMT		0x16
#define D1PWMT		0x17
#define D2PWMT		0x18
#define D3PWMT		0x19
#define IICADDR		0x1a
#define LEDOFF 		0x1b
#define MAGRANGX	0x1c
#define MAGRANGY	0x1d
#define MAGRANGZ	0x1e
#define BANDWIDTH	0x1f
#define GYRORANGE	0x20
#define ACCRANGE	0x21
#define SLEEP			0x22
#define ORIENT		0x23
#define AXIS6		  0x24
#define FILTK			0x25
#define GPSBAUD		0x26
#define READADDR	0x27
#define MOVETHR		0x28
#define MOVESTA		0x29
#define ACCFILT		0x2A
#define GYROFILT	0x2b
#define MAGFILT		0x2c
#define POWONSEND	0x2d
#define VERSION		0x2e
#define RSV8			0x2f
#define YYMM				0x30
#define DDHH				0x31
#define MMSS				0x32
#define MS					0x33
#define AX					0x34
#define AY					0x35
#define AZ					0x36
#define GX					0x37
#define GY					0x38
#define GZ					0x39
#define HX					0x3a
#define HY					0x3b
#define HZ					0x3c			
#define Roll				0x3d
#define Pitch				0x3e
#define Yaw					0x3f
#define TEMP				0x40
#define D0Status		0x41
#define D1Status		0x42
#define D2Status		0x43
#define D3Status		0x44
#define PressureL		0x45
#define PressureH		0x46
#define HeightL			0x47
#define HeightH			0x48
#define LonL				0x49
#define LonH				0x4a
#define LatL				0x4b
#define LatH				0x4c
#define GPSHeight   0x4d
#define GPSYAW      0x4e
#define GPSVL				0x4f
#define GPSVH				0x50
#define q0					0x51
#define q1					0x52
#define q2					0x53
#define q3					0x54
#define SVNUM				0x55
#define PDOP				0x56
#define HDOP				0x57
#define VDOP				0x58
#define DELAYT			0x59
#define XMIN				0x5a
#define XMAX				0x5b
#define GXMIN				0x5c
#define GXMAX				0x5d
#define YMIN				0x5e
#define YMAX				0x5f
#define GYMIN				0x60
#define GYMAX				0x61
#define ALARMLEVEL	0x62
#define GYRONOCAL		0x63
#define REFROLL			0x64
#define REFPITCH		0x65
#define REFYAW			0x66
#define GPSTYPE     0x67

/************CALSW**************/
#define NORMAL 				0x00
#define CALGYROACC 		0x01
#define CALMAG			 	0x02
#define CALMAGMM			0x07
#define CALALTITUDE 	0x03
#define CALANGLEZ		 	0x04
#define CALACCL				0x05
#define CALACCR				0x06
#define CALREFANGLE		0x08
#define BOOTRST				0x20

/************OUTPUTHEAD**************/
#define TIME 		  0x50
#define ACC 		  0x51
#define GYRO 		  0x52
#define ANGLE 	  0x53
#define MAGNETIC  0x54
#define PORT 		  0x55
#define PRESS 	  0x56
#define LONLAT 	  0x57
#define VELOCITY 	0x58
#define REGVALUE 	0x5F



/************RSW**************/
#define RSW_TIME 	0x01
#define RSW_ACC		0x02
#define RSW_GYRO	0x04
#define RSW_ANGLE	0x08
#define RSW_MAG		0x10
#define RSW_PORT		0x20
#define RSW_PRESS	0x40
#define RSW_GPS		0x80
#define RSW_V			0x100
#define RSW_Q			0x200
#define	RSW_GSA		0x400

	
#endif
