/*
obs-ndi
Copyright (C) 2016-2023 Stéphane Lepin <stephane.lepin@gmail.com>

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation; either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License along
with this program. If not, see <https://www.gnu.org/licenses/>
*/

#ifndef PLUGIN_MAIN_H
#define PLUGIN_MAIN_H

#include "plugin-support.h"
#include "obs-support/obs-app.h"
#include "Config.h"

#include <Processing.NDI.Lib.h>

//#define USE_EMULATOR
#ifdef USE_EMULATOR
#define PLUGIN_UPDATE_HOST "127.0.0.1"
#else
#define PLUGIN_UPDATE_HOST "distroav.firebaseapp.com"
#endif
#define PLUGIN_DISCORD_URL "https://discord.gg/ZuTxbUK3ug"
#define PLUGIN_DONATE_URL "https://opencollective.com/obs-ndi/donate"

#define PLUGIN_MIN_QT_VERSION "6.0.0"
#define PLUGIN_MIN_OBS_VERSION "30.0.0"

#define OBS_NDI_ALPHA_FILTER_ID "premultiplied_alpha_filter"

// Required per `NDI SDK License Agreement.pdf` `3 LICENSING`
// "• Your application must provide a link to http://ndi.video ..."
#define NDI_WEB_URL "https://ndi.video"

#define NDI_TOOLS_URL "https://ndi.video/tools/download/"

#if !(defined(_WIN32) || defined(__APPLE__))
// Linux
#undef NDILIB_REDIST_URL
#define NDILIB_REDIST_URL \
	"https://github.com/obs-ndi/obs-ndi/blob/master/CI/libndi-get.sh"
#endif

extern const NDIlib_v4 *ndiLib;

#endif // PLUGIN_MAIN_H
