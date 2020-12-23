/**@file

 Copyright (c) 2018 Intel Corporation. All rights reserved.<BR>
 SPDX-License-Identifier: BSD-2-Clause-Patent
**/


//
// Definition for Pch Serial IO Controllers
//
#ifndef _PCH_SERIALIO_ACPI_DEFINES_EHL_
#define _PCH_SERIALIO_ACPI_DEFINES_EHL_

//
// EHL-PCH Serial IO BDF _ADR
//
#define SERIAL_IO_I2C0_ADR 0x00150000
#define SERIAL_IO_I2C1_ADR 0x00150001
#define SERIAL_IO_I2C2_ADR 0x00150002
#define SERIAL_IO_I2C3_ADR 0x00150003
#define SERIAL_IO_I2C4_ADR 0x00190000
#define SERIAL_IO_I2C5_ADR 0x00190001
#define SERIAL_IO_I2C6_ADR 0x00100000
#define SERIAL_IO_I2C7_ADR 0x00100001

#define SERIAL_IO_SPI0_ADR 0x001E0002
#define SERIAL_IO_SPI1_ADR 0x001E0003
#define SERIAL_IO_SPI2_ADR 0x00120000

#define SERIAL_IO_UART0_ADR 0x001E0000
#define SERIAL_IO_UART1_ADR 0x001E0001
#define SERIAL_IO_UART2_ADR 0x00190002

#endif // _PCH_SERIALIO_ACPI_DEFINES_EHL_