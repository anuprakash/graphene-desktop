/*
 * This file is part of graphene-desktop, the desktop environment of VeltOS.
 * Copyright (C) 2016 Velt Technologies, Aidan Shafran <zelbrium@gmail.com>
 * Licensed under the Apache License 2 <www.apache.org/licenses/LICENSE-2.0>.
 */

#ifndef __CMK_BUTTON_H__
#define __CMK_BUTTON_H__

#include <clutter/clutter.h>
#include "cmk-widget.h"

G_BEGIN_DECLS

#define CMK_TYPE_BUTTON cmk_button_get_type()
G_DECLARE_FINAL_TYPE(CMKButton, cmk_button, CMK, BUTTON, CMKWidget);

CMKButton *cmk_button_new();
CMKButton *cmk_button_new_with_text(const gchar *text);

void cmk_button_set_text(CMKButton *button, const gchar *text);
const gchar * cmk_button_get_text(CMKButton *button);

/*
 * This only informs the button what font color to choose.
 * The actual background color should be drawn by whatever actor the button
 * is on top of.
 */
void cmk_button_set_background_color_name(CMKButton *button, const gchar *name);

/*
 * Returns the button actor's name (clutter_actor_set_name) if it is set,
 * or the button's text otherwise.
 */
const gchar * cmk_button_get_name(CMKButton *button);

G_END_DECLS

#endif
