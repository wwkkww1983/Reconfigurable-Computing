// ==============================================================
// File generated by Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC
// Version: 2017.4
// Copyright (C) 1986-2017 Xilinx, Inc. All Rights Reserved.
// 
// ==============================================================

#ifndef XMY_IP_HLS_H
#define XMY_IP_HLS_H

#ifdef __cplusplus
extern "C" {
#endif

/***************************** Include Files *********************************/
#ifndef __linux__
#include "xil_types.h"
#include "xil_assert.h"
#include "xstatus.h"
#include "xil_io.h"
#else
#include <stdint.h>
#include <assert.h>
#include <dirent.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/mman.h>
#include <unistd.h>
#include <stddef.h>
#endif
#include "xmy_ip_hls_hw.h"

/**************************** Type Definitions ******************************/
#ifdef __linux__
typedef uint8_t u8;
typedef uint16_t u16;
typedef uint32_t u32;
#else
typedef struct {
    u16 DeviceId;
    u32 Psaxilite_BaseAddress;
} XMy_ip_hls_Config;
#endif

typedef struct {
    u32 Psaxilite_BaseAddress;
    u32 IsReady;
} XMy_ip_hls;

/***************** Macros (Inline Functions) Definitions *********************/
#ifndef __linux__
#define XMy_ip_hls_WriteReg(BaseAddress, RegOffset, Data) \
    Xil_Out32((BaseAddress) + (RegOffset), (u32)(Data))
#define XMy_ip_hls_ReadReg(BaseAddress, RegOffset) \
    Xil_In32((BaseAddress) + (RegOffset))
#else
#define XMy_ip_hls_WriteReg(BaseAddress, RegOffset, Data) \
    *(volatile u32*)((BaseAddress) + (RegOffset)) = (u32)(Data)
#define XMy_ip_hls_ReadReg(BaseAddress, RegOffset) \
    *(volatile u32*)((BaseAddress) + (RegOffset))

#define Xil_AssertVoid(expr)    assert(expr)
#define Xil_AssertNonvoid(expr) assert(expr)

#define XST_SUCCESS             0
#define XST_DEVICE_NOT_FOUND    2
#define XST_OPEN_DEVICE_FAILED  3
#define XIL_COMPONENT_IS_READY  1
#endif

/************************** Function Prototypes *****************************/
#ifndef __linux__
int XMy_ip_hls_Initialize(XMy_ip_hls *InstancePtr, u16 DeviceId);
XMy_ip_hls_Config* XMy_ip_hls_LookupConfig(u16 DeviceId);
int XMy_ip_hls_CfgInitialize(XMy_ip_hls *InstancePtr, XMy_ip_hls_Config *ConfigPtr);
#else
int XMy_ip_hls_Initialize(XMy_ip_hls *InstancePtr, const char* InstanceName);
int XMy_ip_hls_Release(XMy_ip_hls *InstancePtr);
#endif


void XMy_ip_hls_Set_rule0_V(XMy_ip_hls *InstancePtr, u32 Data);
u32 XMy_ip_hls_Get_rule0_V(XMy_ip_hls *InstancePtr);
void XMy_ip_hls_Set_rule1_V(XMy_ip_hls *InstancePtr, u32 Data);
u32 XMy_ip_hls_Get_rule1_V(XMy_ip_hls *InstancePtr);
void XMy_ip_hls_Set_rule2_V(XMy_ip_hls *InstancePtr, u32 Data);
u32 XMy_ip_hls_Get_rule2_V(XMy_ip_hls *InstancePtr);
u32 XMy_ip_hls_Get_rule0cnt_V(XMy_ip_hls *InstancePtr);
u32 XMy_ip_hls_Get_rule0cnt_V_vld(XMy_ip_hls *InstancePtr);
u32 XMy_ip_hls_Get_rule1cnt_V(XMy_ip_hls *InstancePtr);
u32 XMy_ip_hls_Get_rule1cnt_V_vld(XMy_ip_hls *InstancePtr);
u32 XMy_ip_hls_Get_rule2cnt_V(XMy_ip_hls *InstancePtr);
u32 XMy_ip_hls_Get_rule2cnt_V_vld(XMy_ip_hls *InstancePtr);

#ifdef __cplusplus
}
#endif

#endif
