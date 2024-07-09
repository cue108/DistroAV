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
/**
 * Select methods copied from OBS UI/obs-app.hpp
 */
#include "obs-app.h"

#include <obs-module.h>

// Changed to use obs_frontend_get_global_config instead of ((OBSApp*)App())->GetGlobalConfig
config_t *GetGlobalConfig()
{
	return obs_frontend_get_global_config();
}

// Changed to use obs_module_text instead of ((OBSApp*)App())->GetString
const char *Str(const char *lookup)
{
	return obs_module_text(lookup);
}

QString QTStr(const char *lookupVal)
{
	return QString::fromUtf8(Str(lookupVal));
}
