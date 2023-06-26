/** @file
  Meteorlake P GPIO definition table for Pre-Memory Initialization

  Copyright (c) 2020 - 2023, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  This file is automatically generated. Please do NOT modify !!!

**/
#ifndef _METEOR_LAKE_P_DDR5_CRB_PREMEM_GPIO_TABLE_H_
#define _METEOR_LAKE_P_DDR5_CRB_PREMEM_GPIO_TABLE_H_

#include <GpioV2PinsMtlSoc.h>
#include <Include/GpioV2Config.h>

GLOBAL_REMOVE_IF_UNREFERENCED GPIOV2_INIT_CONFIG mGpioTablePreMemMtlPSbsRvpDimm[] =
{
//
//M.2 SSD1
//
  {GPIOV2_MTL_SOC_M_GPP_D5,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_PCH_SSD1_PWREN
  {GPIOV2_MTL_SOC_M_GPP_D2,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_SSD1_RST_N

//
//M.2 SSD2
//
  {GPIOV2_MTL_SOC_M_GPP_D1, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_PCH_SSD2_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A13,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_SSD2_RST_N

//
//M.2 SSD3
//
  {GPIOV2_MTL_SOC_M_GPP_B15,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M.2_CPU_SSD3_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //M2_CPU_SSD3_RESET_N

//
//M.2 SSD4
//
  {GPIOV2_MTL_SOC_M_GPP_D6, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M.2_CPU_SSD4_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A14,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_CPU_SSD4_RESET_N

//
//x1 Slot
//
  {GPIOV2_MTL_SOC_M_GPP_A18,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //X1_PCIE_SLOT3_PWR_EN
  {GPIOV2_MTL_SOC_M_GPP_A19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //X1_DT_PCIE_RST_N
  {GPIOV2_MTL_SOC_M_GPP_C2, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //X1_PCIE_SLOT3_WAKE_N

//
//x4 Slot - on rework SSD3 pins are used for x4 slot
//
  {GPIOV2_MTL_SOC_M_GPP_F19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //X4_PCIE_SLOT2_WAKE_N_R

//
//x8 Slot\ PEG
//
  {GPIOV2_MTL_SOC_M_GPP_A11,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_SEL_N
  {GPIOV2_MTL_SOC_M_GPP_D3, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_PWR_EN_N
  {GPIOV2_MTL_SOC_M_GPP_B9, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_RST_N,
  {GPIOV2_MTL_SOC_M_GPP_F20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault, GpioV2Unlock, GpioV2Lock }},  //PEG_SLOT_WAKE_R_N
  {GPIOV2_MTL_SOC_M_GPP_B20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //PEG_RTD3_COLD_MOD
  {GPIOV2_MTL_SOC_M_GPP_C15,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_PWR_OK

//
//M.2 WLAN
//
  {GPIOV2_MTL_SOC_M_GPP_F6,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //WLAN_WWAN_COEX3
  {GPIOV2_MTL_SOC_M_GPP_H2,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //WLAN_RST_N
  {GPIOV2_MTL_SOC_M_GPP_A12,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //WIFI_WAKE_N
  {GPIOV2_MTL_SOC_M_GPP_E3, {GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntEdge|GpioV2IntApic,GpioV2ResetHost,      GpioV2TermNone,     GpioV2Unlock,  GpioV2Lock  }},  //UART_BT_WAKE_LS_N
  {GPIOV2_MTL_SOC_M_GPP_B18,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //BT_RF_KILL_N
  {GPIOV2_MTL_SOC_M_GPP_B19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //WIFI_RF_KILL_N

//LID Wake GPIO
  {GPIOV2_MTL_SOC_M_GPP_V2, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv, GpioV2StateDefault, GpioV2IntDis|GpioV2IntSci, GpioV2ResetHostDeep, GpioV2TermNone, GpioV2Lock, GpioV2Lock}}, // SMC_WAKE_SCI_N
// WWAN
// Please don't change the sequence of Gpio Initialization
  {GPIOV2_MTL_SOC_M_GPP_B17, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,   GpioV2StateHigh,     GpioV2IntDis,                GpioV2ResetResume,  GpioV2TermNone, GpioV2Lock,  GpioV2Unlock }},    // WWAN_PWREN
  {GPIOV2_MTL_SOC_M_GPP_E7,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,   GpioV2StateHigh,     GpioV2IntDis,                GpioV2ResetResume,  GpioV2TermNone, GpioV2Lock,  GpioV2Unlock }},    // M.2_WWAN_FCP_OFF_N
  {GPIOV2_MTL_SOC_M_GPP_A15, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,   GpioV2StateHigh,     GpioV2IntDis,                GpioV2ResetResume,  GpioV2TermNone, GpioV2Lock,  GpioV2Unlock }},    // M.2_WWAN_RST_N
  {GPIOV2_MTL_SOC_M_GPP_C5,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,   GpioV2StateHigh,     GpioV2IntDis,               GpioV2ResetHost,  GpioV2TermNone,GpioV2Lock,  GpioV2Unlock }},    // M.2_WWAN_PERST_GPIO_N
  {GPIOV2_MTL_SOC_M_GPP_F21, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv, GpioV2StateDefault,  GpioV2IntLevel|GpioV2IntSci,    GpioV2ResetHostDeep,  GpioV2TermNone,  GpioV2Unlock,  GpioV2Lock }},  // WWAN_WAKE_GPIO_N
  {GPIOV2_MTL_SOC_M_GPP_D7,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,   GpioV2StateHigh,     GpioV2IntDis,                GpioV2ResetResume,  GpioV2TermNone, GpioV2Lock,  GpioV2Unlock }},    // M.2_WWAN_DISABLE_N
  {GPIOV2_MTL_SOC_M_GPP_D8,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,    GpioV2StateDefault,  GpioV2IntLevel|GpioV2IntSci,  GpioV2ResetHostDeep,  GpioV2TermNone, GpioV2Unlock,  GpioV2Lock }},     // SAR_DPR_PCH

  {0x0}  // terminator
};


GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemMtlPSbsRvpTempDimm[] =
{
//
//Type-C , TBT Re-Timers
//
  {GPIOV2_MTL_SOC_M_GPP_B21,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //TCP_RETIMER_FORCE_PWR

//
//AUDIO
//
  {GPIOV2_MTL_SOC_M_GPP_F9,{GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntApic,GpioV2ResetHost,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //CODEC_INT_N

//
//Camera Conn 1
//
  {GPIOV2_MTL_SOC_M_GPP_C8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD1_PWREN_MCF_IRQ
  {GPIOV2_MTL_SOC_M_GPP_E8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD_PRIVACY_LED , same pin works CRD2 Privacy pin on rework
  {GPIOV2_MTL_SOC_M_GPP_V22,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD1_CLK_EN
  {GPIOV2_MTL_SOC_M_GPP_V23,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD1_RST_N_MCF_RST_N
  {GPIOV2_MTL_SOC_M_GPP_B1, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,    GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD_CAM_STROBE ,  same pin works for CRD2 on rework

//
//Camera Conn 2
//
  {GPIOV2_MTL_SOC_M_GPP_A17,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD2_PWREN
  {GPIOV2_MTL_SOC_M_GPP_H0, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD2_RST_N

//
//M.2 SSD1
//
  {GPIOV2_MTL_SOC_M_GPP_D5,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_PCH_SSD1_PWREN
  {GPIOV2_MTL_SOC_M_GPP_D2,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_SSD1_RST_N

//
//M.2 SSD2
//
  {GPIOV2_MTL_SOC_M_GPP_D1, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_PCH_SSD2_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A13,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_SSD2_RST_N

//
//M.2 SSD3
//
  {GPIOV2_MTL_SOC_M_GPP_B15,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M.2_CPU_SSD3_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_CPU_SSD3_RESET_N

//
//M.2 SSD4
//
  {GPIOV2_MTL_SOC_M_GPP_D6, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M.2_CPU_SSD4_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A14,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_CPU_SSD4_RESET_N

//
//x1 Slot
//
  {GPIOV2_MTL_SOC_M_GPP_A18,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //X1_PCIE_SLOT3_PWR_EN
  {GPIOV2_MTL_SOC_M_GPP_A19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //X1_DT_PCIE_RST_N
  {GPIOV2_MTL_SOC_M_GPP_C2, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //X1_PCIE_SLOT3_WAKE_N

//
//x4 Slot - on rework SSD3 pins are used for x4 slot
//
  {GPIOV2_MTL_SOC_M_GPP_F19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //X4_PCIE_SLOT2_WAKE_N_R

//
//x8 Slot\ PEG
//
  {GPIOV2_MTL_SOC_M_GPP_A11,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_SEL_N
  {GPIOV2_MTL_SOC_M_GPP_D3, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_PWR_EN_N
  {GPIOV2_MTL_SOC_M_GPP_B9, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_RST_N,
  {GPIOV2_MTL_SOC_M_GPP_F20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //PEG_SLOT_WAKE_R_N
  {GPIOV2_MTL_SOC_M_GPP_B20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //PEG_RTD3_COLD_MOD
  {GPIOV2_MTL_SOC_M_GPP_C15,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_PWR_OK

//
//M.2 WLAN
//
  {GPIOV2_MTL_SOC_M_GPP_F6,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //WLAN_WWAN_COEX3
  {GPIOV2_MTL_SOC_M_GPP_H2,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //WLAN_RST_N
  {GPIOV2_MTL_SOC_M_GPP_A12,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //WIFI_WAKE_N
  {GPIOV2_MTL_SOC_M_GPP_E3, {GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntEdge|GpioV2IntApic,GpioV2ResetHost,      GpioV2TermNone,     GpioV2Unlock,  GpioV2Lock  }},  //UART_BT_WAKE_LS_N
  {GPIOV2_MTL_SOC_M_GPP_B18,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //BT_RF_KILL_N
  {GPIOV2_MTL_SOC_M_GPP_B19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //WIFI_RF_KILL_N

//
//Touch Pad
//
  {GPIOV2_MTL_SOC_M_GPP_H1,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //GPP_H1_TCH_PAD_TCH_PNL2_LS_EN
  {GPIOV2_MTL_SOC_M_GPP_B0,{GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntEdge|GpioV2IntApic,GpioV2ResetHost,  GpioV2TermNone,  GpioV2Unlock,  GpioV2Lock  }},  //TCH_PAD_INT_N

//
//Touch panel-2
//
  {GPIOV2_MTL_SOC_M_GPP_F22,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //TCH_PNL2_PWR_EN

//
//Touch panel-1
//
  {GPIOV2_MTL_SOC_M_GPP_F23,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //TCH_PNL1_PWR_EN
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIOV2_INIT_CONFIG mGpioTablePreMemMtlPSbsCRBDimm[] =
{
  //
  // I2C0 Alert
  //
  {GPIOV2_MTL_SOC_M_GPP_B8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,   GpioV2IntLevel|GpioV2IntSci, GpioV2ResetHost,  GpioV2TermDefault}},  // GPP_B8_I2C0_ALERT_N
//
//
//
  {GPIOV2_MTL_SOC_M_GPP_B18, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntLevel|GpioV2IntSci, GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPI09, HDMI_WAKE
  {GPIOV2_MTL_SOC_M_GPP_B22, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_C8_SML1ALERT_N_PCHHOT_N
//
  {GPIOV2_MTL_SOC_M_GPP_C8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},

//
//SPI TPM INT_N
//
  {GPIOV2_MTL_SOC_M_GPP_D3, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,    GpioV2IntLevel|GpioV2IntSci, GpioV2ResetHost,  GpioV2TermDefault}},

//
// BSEL
//
  {GPIOV2_MTL_SOC_M_GPP_D8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //BSEL0
  {GPIOV2_MTL_SOC_M_GPP_D5, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //BSEL1
  {GPIOV2_MTL_SOC_M_GPP_D6, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //BSEL2


//
// GPP_E4_USB_RT_ENA
//
  {GPIOV2_MTL_SOC_M_GPP_E4, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,      GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_E5_SATA_DEVSLP_1
//
  {GPIOV2_MTL_SOC_M_GPP_E5, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},

//
//GPP_E8_DNX_IN_PROG_LED
//
  {GPIOV2_MTL_SOC_M_GPP_E8,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPSPI0_INT_N
//
  {GPIOV2_MTL_SOC_M_GPP_E17, {GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault, GpioV2IntApic|GpioV2IntEdge, GpioV2ResetHost,  GpioV2TermDefault}},

//
//GPP_F11_CSI1_ENA
//
  {GPIOV2_MTL_SOC_M_GPP_F11,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_F16_PEG_LANE_REV
//
  {GPIOV2_MTL_SOC_M_GPP_F16,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_F18_USB_PD_ALERT_N
//
  {GPIOV2_MTL_SOC_M_GPP_F18,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,      GpioV2IntEdge|GpioV2IntSci,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_H0_CSI1_RST_N
//
  {GPIOV2_MTL_SOC_M_GPP_H0,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_V22_GPIO_10
//
  {GPIOV2_MTL_SOC_M_GPP_V22,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00

//
// GPP_V23_CSI0_RST_N
//
  {GPIOV2_MTL_SOC_M_GPP_V23,   {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,      GpioV2IntDis,                GpioV2ResetHost,  GpioV2TermDefault}},  //COM HPC GPIO00


//
//M.2 WLAN
//
  {GPIOV2_MTL_SOC_M_GPP_F0, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},   //BT_RF_KILL_N
  {GPIOV2_MTL_SOC_M_GPP_E3, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //WIFI_RF_KILL_N
  {GPIOV2_MTL_SOC_M_GPP_F6, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //WIFI_WAKE_N

//
// Lan RST
//
  {GPIOV2_MTL_SOC_M_GPP_E7, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis, GpioV2ResetHost,  GpioV2TermDefault}},  //GPP_E7_LAN_RST_N


//
// Unused GPIO
//
  {GPIOV2_MTL_SOC_M_GPP_A11, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_A12, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_A15, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_A18, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_A19, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_A20, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B0,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B1,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B2,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B3,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B4,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B7,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B11, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B17, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B19, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_B23, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_C5,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_C10, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_C12, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_C13, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_C15, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D0,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D1,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D2,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D14, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D15, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D16, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D17, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D21, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D22, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_D23, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_E0,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_E1,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_E2,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_E6,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F1,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F2,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F3,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F4,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F5,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F8,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F9,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F10, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F12, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F13, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F15, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F17, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F19, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F20, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F21, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F22, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_F23, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_H1,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_H2,  {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_H13, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused
  {GPIOV2_MTL_SOC_M_GPP_V15, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis, GpioV2ResetHost,  GpioV2TermWpu20K}},  // Unused

  {0x0}  // terminator

};

GLOBAL_REMOVE_IF_UNREFERENCED GPIOV2_INIT_CONFIG mGpioTablePreMemMtlPLP5SbsRvpDimm[] =
{
//
//Type-C , TBT Re-Timers
//
  {GPIOV2_MTL_SOC_M_GPP_B21,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //TCP_RETIMER_FORCE_PWR

//
//AUDIO
//
  {GPIOV2_MTL_SOC_M_GPP_F9,{GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntApic,GpioV2ResetHost,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock }},  //CODEC_INT_N
//
//Camera Conn 1
//
  {GPIOV2_MTL_SOC_M_GPP_C8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD1_PWREN_MCF_IRQ
  {GPIOV2_MTL_SOC_M_GPP_E8, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD_PRIVACY_LED , same pin works CRD2 Privacy pin on rework
  {GPIOV2_MTL_SOC_M_GPP_V22,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD1_CLK_EN
  {GPIOV2_MTL_SOC_M_GPP_V23,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD1_RST_N_MCF_RST_N
  {GPIOV2_MTL_SOC_M_GPP_B1, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD_CAM_STROBE ,  same pin works for CRD2 on rework

//
//Camera Conn 2
//
  {GPIOV2_MTL_SOC_M_GPP_A17,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD2_PWREN
  {GPIOV2_MTL_SOC_M_GPP_H0, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //CRD2_RST_N

//
//M.2 SSD1
//
  {GPIOV2_MTL_SOC_M_GPP_D5,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_PCH_SSD1_PWREN
  {GPIOV2_MTL_SOC_M_GPP_D2,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_SSD1_RST_N

//
//M.2 SSD2
//
  {GPIOV2_MTL_SOC_M_GPP_D1, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_PCH_SSD2_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A13,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_SSD2_RST_N

//
//M.2 SSD3
//
  {GPIOV2_MTL_SOC_M_GPP_B15,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M.2_CPU_SSD3_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //M2_CPU_SSD3_RESET_N

//
//M.2 SSD4
//
  {GPIOV2_MTL_SOC_M_GPP_D6, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M.2_CPU_SSD4_PWREN
  {GPIOV2_MTL_SOC_M_GPP_A14,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //M2_CPU_SSD4_RESET_N

//
//x1 Slot
//
  {GPIOV2_MTL_SOC_M_GPP_A18,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //X1_PCIE_SLOT3_PWR_EN
  {GPIOV2_MTL_SOC_M_GPP_A19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //X1_DT_PCIE_RST_N
  {GPIOV2_MTL_SOC_M_GPP_C2, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //X1_PCIE_SLOT3_WAKE_N

//
//x4 Slot - on rework SSD3 pins are used for x4 slot
//
  {GPIOV2_MTL_SOC_M_GPP_F19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //X4_PCIE_SLOT2_WAKE_N_R

//
//x8 Slot\ PEG
//
  {GPIOV2_MTL_SOC_M_GPP_A11,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_SEL_N
  {GPIOV2_MTL_SOC_M_GPP_D3, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateLow,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_PWR_EN_N
  {GPIOV2_MTL_SOC_M_GPP_B9, {GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_RST_N,
  {GPIOV2_MTL_SOC_M_GPP_F20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //PEG_SLOT_WAKE_R_N
  {GPIOV2_MTL_SOC_M_GPP_B20,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //PEG_RTD3_COLD_MOD
  {GPIOV2_MTL_SOC_M_GPP_C15,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault, GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PEG_SLOT_DGPU_PWR_OK

//
//M.2 WLAN
//
  {GPIOV2_MTL_SOC_M_GPP_F6,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirIn,  GpioV2StateDefault,GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //WLAN_WWAN_COEX3
  {GPIOV2_MTL_SOC_M_GPP_H2,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //WLAN_RST_N
  {GPIOV2_MTL_SOC_M_GPP_A12,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntLevel|GpioV2IntSci,GpioV2ResetHostDeep,  GpioV2TermDefault,  GpioV2Unlock,  GpioV2Lock  }},  //WIFI_WAKE_N
  {GPIOV2_MTL_SOC_M_GPP_E3, {GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntEdge|GpioV2IntApic,GpioV2ResetHost,      GpioV2TermNone,     GpioV2Unlock,  GpioV2Lock  }},  //UART_BT_WAKE_LS_N
  {GPIOV2_MTL_SOC_M_GPP_B18,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //BT_RF_KILL_N
  {GPIOV2_MTL_SOC_M_GPP_B19,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHostDeep,  GpioV2TermDefault}},  //WIFI_RF_KILL_N

//
//PCON
//
  {GPIOV2_MTL_SOC_M_GPP_B14,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //PCON_PS_CTRL

//
//Touch Pad
//
  {GPIOV2_MTL_SOC_M_GPP_H1,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //GPP_H1_TCH_PAD_TCH_PNL2_LS_EN
  {GPIOV2_MTL_SOC_M_GPP_B0,{GpioV2PadModeGpio, GpioV2HostOwnGpio, GpioV2DirInInv,  GpioV2StateDefault,GpioV2IntEdge|GpioV2IntApic,GpioV2ResetHost,  GpioV2TermNone,  GpioV2Unlock,  GpioV2Lock  }},  //TCH_PAD_INT_N

//
//Touch panel-2
//
  {GPIOV2_MTL_SOC_M_GPP_F22,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //TCH_PNL2_PWR_EN

//
//Touch panel-1
//
  {GPIOV2_MTL_SOC_M_GPP_F23,{GpioV2PadModeGpio, GpioV2HostOwnAcpi, GpioV2DirOut,  GpioV2StateHigh,   GpioV2IntDis,GpioV2ResetHost,  GpioV2TermDefault}},  //TCH_PNL1_PWR_EN

  {GPIOV2_MTL_SOC_M_GPP_S0,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S1,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S2,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S3,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S4,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S5,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S6,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC
  {GPIOV2_MTL_SOC_M_GPP_S7,  {GpioV2PadModeHardwareDefault, GpioV2HostOwnDefault, GpioV2DirDefault, GpioV2StateDefault,  GpioV2IntDefault, GpioV2ResetDefault, GpioV2TermDefault, GpioV2Unlock, GpioV2Unlock }}, //NC

  {0x0}  // terminator
};

#endif // _METEOR_LAKE_P_PREMEM_GPIO_TABLE_H_
