/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein
 * is confidential and proprietary to MediaTek Inc. and/or its licensors.
 * Without the prior written permission of MediaTek inc. and/or its licensors,
 * any reproduction, modification, use or disclosure of MediaTek Software,
 * and information contained herein, in whole or in part, shall be strictly prohibited.
 */
/* MediaTek Inc. (C) 2010. All rights reserved.
 *
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER ON
 * AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL WARRANTIES,
 * EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR NONINFRINGEMENT.
 * NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH RESPECT TO THE
 * SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY, INCORPORATED IN, OR
 * SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES TO LOOK ONLY TO SUCH
 * THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO. RECEIVER EXPRESSLY ACKNOWLEDGES
 * THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES
 * CONTAINED IN MEDIATEK SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK
 * SOFTWARE RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S ENTIRE AND
 * CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE RELEASED HEREUNDER WILL BE,
 * AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE MEDIATEK SOFTWARE AT ISSUE,
 * OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE CHARGE PAID BY RECEIVER TO
 * MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek Software")
 * have been modified by MediaTek Inc. All revisions are subject to any receiver's
 * applicable license agreements with MediaTek Inc.
 */

#ifndef __NAND_DEVICE_LIST_H__
#define __NAND_DEVICE_LIST_H__

static const flashdev_info gen_FlashTable[]={
	{0x20BC, 0x105554, 5, 16, 512, 128, 2048, 64, 0x1123, "EHD013151MA_5", 0},
	{0xECBC, 0x005554, 5, 16, 512, 128, 2048, 64, 0x1123, "K524G2GACB_A0", 0},
	{0x2CBC, 0x905556, 5, 16, 512, 128, 2048, 64, 0x21044333, "MT29C4G96MAZA", 0},
	{0xADBC, 0x905554, 5, 16, 512, 128, 2048, 64, 0x10801011, "H9DA4GH4JJAMC", 0},
    {0x01F1, 0x801D01, 4, 8, 128, 128, 2048, 64, 0x30C77fff, "S34ML01G100TF", 0},
    {0x92F1, 0x8095FF, 4, 8, 128, 128, 2048, 64, 0x30C77fff, "F59L1G81A", 0},
	{0xECD3, 0x519558, 5, 8, 1024, 128, 2048, 64, 0x44333, "K9K8G8000", 0},
    {0xC2F1, 0x801DC2, 4, 8, 128, 128, 2048, 64, 0x30C77fff, "MX30LF1G08AA", 0},
    {0x98D3, 0x902676, 5, 8, 1024, 256, 4096, 224, 0x00C25332, "TC58NVG3S0F", 0},
    {0x01DA, 0x909546, 5, 8, 256, 128, 2048, 128, 0x30C77fff, "S34ML02G200TF", 0},
    {0x01DC, 0x909556, 5, 8, 512, 128, 2048, 128, 0x30C77fff, "S34ML04G200TF", 0},
	{0x0000, 0x000000, 0, 0, 0, 0, 0, 0, 0, "xxxxxxxxxx", 0},
};


#endif
