#ifndef __GETPASS_H
#define __GETPASS_H
/***************************************************************************
 *                                  _   _ ____  _
 *  Project                     ___| | | |  _ \| |
 *                             / __| | | | |_) | |
 *                            | (__| |_| |  _ <| |___
 *                             \___|\___/|_| \_\_____|
 *
 * Copyright (C) 1998 - 2004, Daniel Stenberg, <daniel@haxx.se>, et al.
 *
 * This software is licensed as described in the file COPYING, which
 * you should have received as part of this distribution. The terms
 * are also available at http://curl.haxx.se/docs/copyright.html.
 *
 * You may opt to use, copy, modify, merge, publish, distribute and/or sell
 * copies of the Software, and permit persons to whom the Software is
 * furnished to do so, under the terms of the COPYING file.
 *
 * This software is distributed on an "AS IS" basis, WITHOUT WARRANTY OF ANY
 * KIND, either express or implied.
 *
 * $Id: getpass.h,v 1.2 2004/01/07 09:19:36 bagder Exp $
 ***************************************************************************/
#ifndef HAVE_GETPASS_R
/* If there's a system-provided function named like this, we trust it is
   also found in one of the standard headers. */

/*
 * Returning NULL will abort the continued operation!
 */
char *getpass_r( const char *prompt, char *buffer, size_t buflen );
#endif

#endif
