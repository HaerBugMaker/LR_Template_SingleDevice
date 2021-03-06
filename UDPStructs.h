/***********************************************************************
* UDP常用结构及具体项目需要的结构
* 2018.4.28 TMyIp结构支持MAC地址
* 2018.5.9 新增跨平台数据类型定义
***********************************************************************/
#ifndef COMMBASE_H
#define COMMBASE_H
#include "System.hpp"
#include <vector>


//常用数据类型定义
typedef char s8;
typedef unsigned char u8;
typedef unsigned char const uc8;
typedef unsigned char uchar;
typedef unsigned short u16;
typedef short s16;
typedef unsigned int u32;
typedef int s32;

//跨平台数据类型定义
/*
typedef int8_t s8;
typedef uint8_t u8;
typedef int16_t s16;
typedef uint16_t u16;
typedef int32_t s32;
typedef uint32_t u32
*/

//通用UDP结构体
typedef struct {
  char Cmd[10];
  char IdentifyingCode[20];
  u8 StartByte;
  u8 CmdType;
  u16 ParaStaAdd;
  u16 ParaNum;
  u8 Para[1024];
  u16 ChkSum;
}TUDPSysPara;

//Rd数据结构体
typedef struct {
  char Cmd[10];
  char IdentifyingCode[20];
  u8 StartByte;
  u8 CmdType;
  u16 ParaStaAdd;
  u16 ParaNum;
  u16 ChkSum;
}TUDPSetParaConfirm;

//广播信息结构体组成部分1
typedef struct {
	char MyName[64];
	char EquType[16];
	char EquSer[16];
	char FWVer[16];
	char FWDate[16];
	u16 Address;
	u16 Baud;
	u8  mac[6];
	u8  ip[4];
	u8  maskip[4];
	u8  gatewayip[4];
	u16 UDPport;
	u16 WWWport;
	u16 TCPport;
	u16 UPGRADEport;
	char FirstUse[8];
	u32 rev;
}TAddressPara;

//广播信息结构体完成体
typedef struct {
  u16  Address;
  char Cmd[16];
  TAddressPara AddressPara;
  u16 ChkSum;
}TUDPAddressPara;


//系统时间结构
typedef struct
{
  u16 msCnt;
  u8 sec,min,hour,date,month,year;
  u8 weekday;
}TSysTime;

//校时结构
typedef struct {//port 15288
	char Cmd[20];  //"CalibDateTime"
	TSysTime DT;
}TUDPCalibTime;

//标准CAN转网络网关数据结构
typedef struct { //can tran buf
  u16  Address;
  u16  len;
  char Cmd[12];   //"CanRDat"  "CanTDat"
  u16 Exid[2];   //Exid[0]:id5-12   Exid[1]:id13-20
  u8  CanDat[1200];
}TCanTRDat;

//软件的网络连接参数
typedef struct{
	String IpAddr;
	String Mask;
	String Bcast;
    u8 MAC[6];
}TMyIp;

//通用系统参数结构
typedef struct {
	char MyName[64];
 	char EquType[16];
 	char EquSer[16];
 	char FWVer[16];
	char FWDate[16];
	u16 Address;
	u16 Baud;
	u8  mac[6];
	u8  ip[4];
	u8  maskip[4];
	u8  gatewayip[4];
	u16 UDPport;
	u16 WWWport;
	u16 TCPport;
	u16 UPGRADEport;
	char FirstUse[8];
	char IdentifyingCode[20];   //识别字
}TSysPara;

//通用设备信息
struct TDeviceInfo{
	String IP{L"192.168.0.11"};                 //设备IP信息
	u16    Port{2305};               //设备端口
};







#endif