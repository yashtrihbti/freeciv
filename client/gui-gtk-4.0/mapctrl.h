/***********************************************************************
 Freeciv - Copyright (C) 1996 - A Kjeldberg, L Gregersen, P Unold
   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
***********************************************************************/
#ifndef FC__MAPCTRL_H
#define FC__MAPCTRL_H

#include <gtk/gtk.h>

/* common */
#include "fc_types.h"

/* client */
#include "mapctrl_g.h"

gboolean butt_release_mapcanvas(GtkWidget *w, GdkEventButton *ev, gpointer data);
gboolean butt_down_mapcanvas(GtkWidget *w, GdkEventButton *ev, gpointer data);
gboolean butt_down_overviewcanvas(GtkWidget *w, GdkEventButton *ev, gpointer data);
gboolean move_mapcanvas(GtkWidget *w, GdkEventMotion *ev, gpointer data);
gboolean leave_mapcanvas(GtkWidget *widget, GdkEventCrossing *event);
gboolean move_overviewcanvas(GtkWidget *w, GdkEventMotion *ev, gpointer data);

void center_on_unit(void);

void popupinfo_popdown_callback(GtkWidget *w, gpointer data);

#endif  /* FC__MAPCTRL_H */
