/* MTI_DPI */

/*
 * Copyright 2002-2016 Mentor Graphics Corporation.
 *
 * Note:
 *   This file is automatically generated.
 *   Please do not edit this file - you will lose your edits.
 *
 * Settings when this file was generated:
 *   PLATFORM = 'linuxpe'
 */
#ifndef INCLUDED_DPIHEADER
#define INCLUDED_DPIHEADER

#ifdef __cplusplus
#define DPI_LINK_DECL  extern "C" 
#else
#define DPI_LINK_DECL 
#endif

#include "svdpi.h"



DPI_LINK_DECL DPI_DLLESPEC
void
jtag_init(
    int port);

DPI_LINK_DECL DPI_DLLESPEC
int
jtag_recv(
    svLogic* tck_o,
    svLogic* trst_o,
    svLogic* tdi_o,
    svLogic* tms_o);

DPI_LINK_DECL DPI_DLLESPEC
void
jtag_timeout();

DPI_LINK_DECL svLogic
rtl_get_tdo();

#endif 
