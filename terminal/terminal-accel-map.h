/* $Id: terminal-accel-map.h,v 1.1 2004/09/17 23:37:55 bmeurer Exp $ */
/*-
 * Copyright (c) 2004 os-cillation e.K.
 *
 * Written by Benedikt Meurer <benny@xfce.org>.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the Free
 * Software Foundation; either version 2 of the License, or (at your option)
 * any later version.
 *
 * This program is distributed in the hope that it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; if not, write to the Free Software Foundation, Inc., 59 Temple
 * Place, Suite 330, Boston, MA  02111-1307  USA
 */

#ifndef __TERMINAL_ACCEL_MAP_H__
#define __TERMINAL_ACCEL_MAP_H__

#include <glib-object.h>

G_BEGIN_DECLS;

#define TERMINAL_TYPE_ACCEL_MAP             (terminal_accel_map_get_type ())
#define TERMINAL_ACCEL_MAP(obj)             (G_TYPE_CHECK_INSTANCE_CAST ((obj), TERMINAL_TYPE_ACCEL_MAP, TerminalAccelMap))
#define TERMINAL_ACCEL_MAP_CLASS(klass)     (G_TYPE_CHECK_CLASS_CAST ((klass), TERMINAL_TYPE_ACCEL_MAP, TerminalAccelMapClass))
#define TERMINAL_IS_ACCEL_MAP(obj)          (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TERMINAL_TYPE_ACCEL_MAP))
#define TERMINAL_IS_ACCEL_MAP_CLASS(klass)  (G_TYPE_CHECK_CLASS_TYPE ((klass), TERMINAL_TYPE_ACCEL_MAP))
#define TERMINAL_ACCEL_MAP_GET_CLASS(obj)   (G_TYPE_INSTANCE_GET_CLASS ((obj), TERMINAL_TYPE_ACCEL_MAP, TerminalAccepMapClass))

typedef struct _TerminalAccelMapClass TerminalAccelMapClass;
typedef struct _TerminalAccelMap      TerminalAccelMap;

struct _TerminalAccelMapClass
{
  GObjectClass  __parent__;
};

GType             terminal_accel_map_get_type (void) G_GNUC_CONST;

TerminalAccelMap *terminal_accel_map_new      (void);

G_END_DECLS;

#endif /* !__TERMINAL_ACCEL_MAP_H__ */