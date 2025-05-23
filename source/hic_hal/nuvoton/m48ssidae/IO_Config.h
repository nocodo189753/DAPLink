/**
 * @file    IO_Config.h
 * @brief
 *
 * DAPLink Interface Firmware
 * Copyright (c) 2009-2016, ARM Limited, All Rights Reserved
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License"); you may
 * not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef __IO_CONFIG_H__
#define __IO_CONFIG_H__

#include "NuMicro.h"
#include "compiler.h"
#include "daplink.h"

COMPILER_ASSERT(DAPLINK_HIC_ID == DAPLINK_HIC_ID_M48SSIDAE);

///// Daplink-HS EEmaker
// SWD+JTAG
#define EEPIN_SWCLK_TCK_IO      PA10
#define EEPIN_SWCLK_TCK_GRP     PA
#define EEPIN_SWCLK_TCK_BIT     10

#define EEPIN_SWDIO_TMS_IO      PA9
#define EEPIN_SWDIO_TMS_GRP     PA
#define EEPIN_SWDIO_TMS_BIT     9

#define EEPIN_NRST_IO           PF5
#define EEPIN_NRST_GRP          PF
#define EEPIN_NRST_BIT          5

#define EEPIN_TDI_IO            PA7
#define EEPIN_TDI_GRP           PA
#define EEPIN_TDI_BIT           7

#define EEPIN_TDO_IO            PA6
#define EEPIN_TDO_GRP           PA
#define EEPIN_TDO_BIT           6

// LED
#define EEPIN_LED_R_IO          PC6
#define EEPIN_LED_R_GRP         PC
#define EEPIN_LED_R_BIT         6

#define EEPIN_LED_G_IO          PF4
#define EEPIN_LED_G_GRP         PF
#define EEPIN_LED_G_BIT         4

#define EEPIN_LED_B_IO          PB8
#define EEPIN_LED_B_GRP         PB
#define EEPIN_LED_B_BIT         8

// BUTTON
#define EEPIN_BTN_RST_IO        PC7
#define EEPIN_BTN_RST_GRP       PC
#define EEPIN_BTN_RST_BIT       7

#define EEPIN_BTN_USER_IO       PB7
#define EEPIN_BTN_USER_GRP      PB
#define EEPIN_BTN_USER_BIT      7


#endif
