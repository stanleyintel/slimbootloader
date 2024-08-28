/** @file
  AlderLake S RVP GPIO definition table for Pre-Memory Initialization

  Copyright (c) 2020 - 2021, Intel Corporation. All rights reserved.<BR>
  SPDX-License-Identifier: BSD-2-Clause-Patent

  This file is automatically generated. Please do NOT modify !!!

**/
#ifndef _ALDER_LAKE_P_DDR5_CRB_PREMEM_GPIO_TABLE_H_
#define _ALDER_LAKE_P_DDR5_CRB_PREMEM_GPIO_TABLE_H_

#include <GpioPinsVer2Lp.h>
#include <GpioConfig.h>

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemAdlPLp4Rvp[] =
{
  // CPU M.2 SSD
  {GPIO_VER2_LP_GPP_D14, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut, GpioOutHigh, GpioIntDis, GpioPlatformReset, GpioTermNone } },  //CPU SSD PWREN
  {GPIO_VER2_LP_GPP_F20, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut, GpioOutHigh, GpioIntDis, GpioPlatformReset, GpioTermNone } },  //CPU SSD RESET

  // CPU M.2 SSD2
  {GPIO_VER2_LP_GPP_C2,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  //CPU SSD2 PWREN
  {GPIO_VER2_LP_GPP_H1,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  //CPU SSD2 RESET

  // X4 Pcie Slot for Gen3 and Gen 4
  {GPIO_VER2_LP_GPP_H17, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},//ONBOARD_X4_PCIE_SLOT1_PWREN_N
  {GPIO_VER2_LP_GPP_F10, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},//ONBOARD_X4_PCIE_SLOT1_RESET_N

  //RTD3 GPIO header for PEG Slot
  {GPIO_VER2_LP_GPP_A11, {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,                 GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PEG_SLOT_DGPU_SEL_N
  {GPIO_VER2_LP_GPP_A14, {GpioPadModeGpio,  GpioHostOwnAcpi,    GpioDirOut,   GpioOutLow,     GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_DGPU_PWR_EN_N
  {GPIO_VER2_LP_GPP_B2,  {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_RST_N
  {GPIO_VER2_LP_GPP_A19, {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirIn,    GpioOutDefault, GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_DGPU_PWR_OK
  {GPIO_VER2_LP_GPP_A20, {GpioPadModeGpio,  GpioHostOwnAcpi,    GpioDirInInv, GpioOutDefault,  GpioIntLevel | GpioIntSci,     GpioHostDeepReset, GpioTermNone , GpioPadConfigUnlock }}, // PEG_SLOT_WAKE_N
  {GPIO_VER2_LP_GPP_D17, {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,     GpioIntDefault,                GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, // PEG_RTD3_COLD_MOD

  // TBT Re-Timers
  {GPIO_VER2_LP_GPP_E4,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  //TC_RETIMER_FORCE_PWR

  //
  // RCR: 16012187645 : [ADP-P ][PO][PCIe]: PCIe devices are not getting detected on PCH PCIe DT x1 slot
  //
  {GPIO_VER2_LP_GPP_E5,  {GpioPadModeGpio,  GpioHostOwnGpio,  GpioDirOut,  GpioOutLow,  GpioIntDefault,  GpioPlatformReset,  GpioTermNone }}, // SRCCLK_OEB6
  {GPIO_VER2_LP_GPP_A7,  {GpioPadModeGpio,  GpioHostOwnGpio,  GpioDirOut,  GpioOutLow,  GpioIntDefault,  GpioPlatformReset,  GpioTermNone }}, // SRCCLK_OEB7
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemAdlPLp5Rvp[] =
{
  // CPU M.2 SSD
  {GPIO_VER2_LP_GPP_D14, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioPlatformReset, GpioTermNone}},  //CPU SSD PWREN
  {GPIO_VER2_LP_GPP_F20, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioPlatformReset, GpioTermNone}},  //CPU SSD RESET

  // CPU M.2 SSD2
  {GPIO_VER2_LP_GPP_C2,  {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioPlatformReset, GpioTermNone}},  //CPU SSD2 PWREN
  {GPIO_VER2_LP_GPP_H1,  {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioPlatformReset, GpioTermNone}},  //CPU SSD2 RESET

  // X4 Pcie Slot for Gen3 and Gen 4
  {GPIO_VER2_LP_GPP_H17, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutLow,     GpioIntDis, GpioPlatformReset, GpioTermNone}},//ONBOARD_X4_PCIE_SLOT1_PWREN_N
  {GPIO_VER2_LP_GPP_F10, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutHigh,    GpioIntDis, GpioPlatformReset, GpioTermNone}},//ONBOARD_X4_PCIE_SLOT1_RESET_N

  //RTD3 GPIO header for PEG Slot
  {GPIO_VER2_LP_GPP_A11, {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,            GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PEG_SLOT_DGPU_SEL_N
  {GPIO_VER2_LP_GPP_A14, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutLow,     GpioIntDefault,            GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_DGPU_PWR_EN_N
  {GPIO_VER2_LP_GPP_B2,  {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,            GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_RST_N
  {GPIO_VER2_LP_GPP_A19, {GpioPadModeGpio, GpioHostOwnDefault, GpioDirIn,    GpioOutDefault, GpioIntDefault,            GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_DGPU_PWR_OK
  {GPIO_VER2_LP_GPP_A20, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirInInv, GpioOutDefault, GpioIntLevel | GpioIntSci, GpioHostDeepReset, GpioTermNone , GpioPadConfigUnlock }}, // PEG_SLOT_WAKE_N
  {GPIO_VER2_LP_GPP_D17, {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,            GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, // PEG_RTD3_COLD_MOD

  // TBT Re-Timers
  {GPIO_VER2_LP_GPP_E4,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  //TC_RETIMER_FORCE_PWR

  //
  // RCR: 16012187645 : [ADP-P ][PO][PCIe]: PCIe devices are not getting detected on PCH PCIe DT x1 slot
  //
  {GPIO_VER2_LP_GPP_E5,  {GpioPadModeGpio, GpioHostOwnGpio,  GpioDirOut,  GpioOutLow,  GpioIntDefault,  GpioPlatformReset,  GpioTermNone }}, // SRCCLK_OEB6
  {GPIO_VER2_LP_GPP_A7,  {GpioPadModeGpio, GpioHostOwnGpio,  GpioDirOut,  GpioOutLow,  GpioIntDefault,  GpioPlatformReset,  GpioTermNone }}, // SRCCLK_OEB7
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemRplpLp5AutoRvp[] =
{
  // CPU M.2 SSD1
  {GPIO_VER2_LP_GPP_E6, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  // GEN5_CPU_PCIE_X8_PEG_SLOT1_SEL_N
  {GPIO_VER2_LP_GPP_H1, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  // GEN4_CPU_PCIE_X4_M2_KEYM_PERST_N

  // X4 Pcie Slot for Gen3 and Gen 4
  {GPIO_VER2_LP_GPP_F20,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis,GpioPlatformReset,  GpioTermNone}}, // GEN4_CPU_PCIE_X4_SLOT2_PWREN
  {GPIO_VER2_LP_GPP_H17, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}}, // GEN4_CPU_PCIE_X4_SLOT2_PERST_N

  // RTD3 GPIO header for PEG Slot
  {GPIO_VER2_LP_GPP_F6,    {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,                 GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //GEN4_CPU_PCIE_X4_M2_KEYM_PWREN
  {GPIO_VER2_LP_GPP_F10,   {GpioPadModeGpio,  GpioHostOwnAcpi,    GpioDirOut,   GpioOutLow,     GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // GEN5_CPU_PCIE_X8_PEG_SLOT1_PWR_EN_N
  {GPIO_VER2_LP_GPD11,     {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut, GpioOutHigh, GpioIntDis, GpioPlatformReset, GpioTermNone}}, // GEN5_CPU_PCIE_X8_PEG_SLOT1_PERST_N
  {GPIO_VER2_LP_GPP_A23,   {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirIn,    GpioOutDefault, GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // GEN5_CPU_PCIE_X8_PEG_SLOT1_PWR_OK
  {GPIO_VER2_LP_GPP_H9,    {GpioPadModeGpio,  GpioHostOwnAcpi,    GpioDirInInv, GpioOutDefault, GpioIntEdge | GpioIntSci,       GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, // PEG_SLOT_WAKE_N
  {GPIO_VER2_LP_GPP_E2,    {GpioPadModeGpio,  GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDis,                     GpioResetDefault,  GpioTermNone, GpioPadConfigUnlock }}, // GEN5_CPU_PCIE_X8_PEG_SLOT1_RTD3_COLD_MOD

  // USB OC
  {GPIO_VER2_LP_GPP_B5, {GpioPadModeNative2, GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioLockDefault}},
  {GPIO_VER2_LP_GPP_B6, {GpioPadModeNative2, GpioHostOwnDefault, GpioDirDefault, GpioOutDefault, GpioIntDefault, GpioHostDeepReset, GpioTermNone, GpioLockDefault}}
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemRplpAutoWwan[] =
{
  // WWAN
  // Please don't change the sequence of Gpio Initialization
  {GPIO_VER2_LP_GPP_F21,  { GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,    GpioOutHigh,     GpioIntDis,               GpioResumeReset,    GpioTermNone,  GpioOutputStateUnlock}},    // WWAN_PWREN
  {GPIO_VER2_LP_GPP_F15,  { GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,    GpioOutHigh,     GpioIntDis,               GpioResumeReset,    GpioTermNone,  GpioOutputStateUnlock}},    // WWAN_FCP_OFF_N
  {GPIO_VER2_LP_GPP_F14,  { GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,    GpioOutLow,      GpioIntDis,               GpioResumeReset,    GpioTermNone,  GpioOutputStateUnlock}},    // WWAN_RST_N
  {GPIO_VER2_LP_GPP_C5,   { GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,    GpioOutLow,      GpioIntDis,               GpioResumeReset,    GpioTermNone,  GpioOutputStateUnlock}},    // WWAN_PERST_N
  {GPIO_VER2_LP_GPP_E4,   { GpioPadModeGpio, GpioHostOwnGpio, GpioDirInInv,  GpioOutDefault,  GpioIntLevel|GpioIntSci,  GpioHostDeepReset,  GpioTermNone,  GpioPadConfigUnlock}},      // WWAN_WAKE_N
  {GPIO_VER2_LP_GPP_D15,  { GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,    GpioOutHigh,     GpioIntDis,               GpioResumeReset,    GpioTermNone,  GpioOutputStateUnlock}},    // WWAN_DISABLE_N
  {GPIO_VER2_LP_GPP_A6,   { GpioPadModeGpio, GpioHostOwnAcpi, GpioDirIn,     GpioOutDefault,  GpioIntLevel|GpioIntSci,  GpioHostDeepReset,  GpioTermNone,  GpioPadConfigUnlock }},     // SAR_DPR_PCH
};

GLOBAL_REMOVE_IF_UNREFERENCED GPIO_INIT_CONFIG mGpioTablePreMemAdlPDdr5Rvp[] =
{
  // CPU M.2 SSD
  {GPIO_VER2_LP_GPP_D14, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut, GpioOutHigh, GpioIntDis, GpioPlatformReset, GpioTermNone } },  //CPU SSD PWREN
  {GPIO_VER2_LP_GPP_F20, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut, GpioOutHigh, GpioIntDis, GpioPlatformReset, GpioTermNone } },  //CPU SSD RESET

  // CPU M.2 SSD2
  {GPIO_VER2_LP_GPP_C2,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  //CPU SSD2 PWREN
  {GPIO_VER2_LP_GPP_H1,  {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},  //CPU SSD2 RESET

  // X4 Pcie Slot for Gen3 and Gen 4
  {GPIO_VER2_LP_GPP_H17, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutLow,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},//ONBOARD_X4_PCIE_SLOT1_PWREN_N
  {GPIO_VER2_LP_GPP_F10, {GpioPadModeGpio, GpioHostOwnAcpi, GpioDirOut,  GpioOutHigh,   GpioIntDis,GpioPlatformReset,  GpioTermNone}},//ONBOARD_X4_PCIE_SLOT1_RESET_N

  //RTD3 GPIO header for PEG Slot
  {GPIO_VER2_LP_GPP_A11, {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,                 GpioPlatformReset, GpioTermNone, GpioPadConfigUnlock }}, //PEG_SLOT_DGPU_SEL_N
  {GPIO_VER2_LP_GPP_A14, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirOut,   GpioOutLow,     GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_DGPU_PWR_EN_N
  {GPIO_VER2_LP_GPP_B2,  {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,    GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_RST_N
  {GPIO_VER2_LP_GPP_A19, {GpioPadModeGpio, GpioHostOwnDefault, GpioDirIn,    GpioOutDefault, GpioIntDefault,                 GpioPlatformReset, GpioTermNone }}, // PEG_SLOT_DGPU_PWR_OK
  {GPIO_VER2_LP_GPP_A20, {GpioPadModeGpio, GpioHostOwnAcpi,    GpioDirInInv, GpioOutDefault,  GpioIntLevel | GpioIntSci,     GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, // PEG_SLOT_WAKE_N
  {GPIO_VER2_LP_GPP_D17, {GpioPadModeGpio, GpioHostOwnDefault, GpioDirOut,   GpioOutHigh,     GpioIntDefault,                GpioHostDeepReset, GpioTermNone, GpioPadConfigUnlock }}, // PEG_RTD3_COLD_MOD

  // TBT Re-Timers
  {GPIO_VER2_LP_GPP_E4,  {GpioPadModeGpio, GpioHostOwnAcpi,     GpioDirOut,  GpioOutLow,      GpioIntDis,                    GpioPlatformReset, GpioTermNone}},  //TC_RETIMER_FORCE_PWR

  //
  // RCR: 16012187645 : [ADP-P ][PO][PCIe]: PCIe devices are not getting detected on PCH PCIe DT x1 slot
  //
  {GPIO_VER2_LP_GPP_E5,  {GpioPadModeGpio, GpioHostOwnGpio,  GpioDirOut,  GpioOutLow,  GpioIntDefault,  GpioPlatformReset,  GpioTermNone }}, // SRCCLK_OEB6
  {GPIO_VER2_LP_GPP_A7,  {GpioPadModeGpio, GpioHostOwnGpio,  GpioDirOut,  GpioOutLow,  GpioIntDefault,  GpioPlatformReset,  GpioTermNone }}, // SRCCLK_OEB7
};

#endif // _ALDER_LAKE_P_DDR5_CRB_PREMEM_GPIO_TABLE_H_
