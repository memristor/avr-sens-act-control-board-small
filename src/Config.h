#ifndef _CONFIG_H_
#define _CONFIG_H_

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#define CANBUS_BITRATE BITRATE_500_KBPS
#define CAN_FILTER_ID 0x00008D00
#define BINARY_SENSOR_CANID 0x00008D10
#define BRUSHLESS_CANID 0x00008D53
#define AX12_CANID 0x00008D70

#endif
