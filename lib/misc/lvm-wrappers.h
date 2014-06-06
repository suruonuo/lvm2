/*
 * Copyright (C) 2001-2004 Sistina Software, Inc. All rights reserved.  
 * Copyright (C) 2004-2006 Red Hat, Inc. All rights reserved.
 *
 * This file is part of LVM2.
 *
 * This copyrighted material is made available to anyone wishing to use,
 * modify, copy, or redistribute it subject to the terms and conditions
 * of the GNU Lesser General Public License v.2.1.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef _LVM_WRAPPERS_H
#define _LVM_WRAPPERS_H

#ifdef UDEV_SYNC_SUPPORT
struct udev;
struct udev *udev_get_library_context(void);
#endif

int udev_init_library_context(void);
void udev_fin_library_context(void);
int udev_is_running(void);

int lvm_getpagesize(void);

/*
 * Read 'len' bytes of entropy from /dev/urandom and store in 'buf'.
 */
int read_urandom(void *buf, size_t len);

/*
 * Return random integer in [0,max) interval
 */
unsigned lvm_even_rand(unsigned *seed, unsigned max);

inline int clvmd_is_running(void);
inline int cmirrord_is_running(void);


#endif
