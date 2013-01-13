/*
 * Copyright 2011-2013 Branimir Karadzic. All rights reserved.
 * License: http://www.opensource.org/licenses/BSD-2-Clause
 */

#ifndef __BGFXPLATFORM_H__
#define __BGFXPLATFORM_H__

#include <bx/bx.h>

#if BX_PLATFORM_NACL
#	include <ppapi/c/ppb_graphics_3d.h>
#	include <ppapi/c/ppb_instance.h>

namespace bgfx
{
	typedef void (*PostSwapBuffersFn)(uint32_t _width, uint32_t _height);
	void naclSetIntefraces(PP_Instance, const PPB_Instance*, const PPB_Graphics3D*, PostSwapBuffersFn);
} // namespace bgfx

#elif BX_PLATFORM_WINDOWS
#	include <windows.h>

namespace bgfx
{
	void setHwnd(HWND _hwnd);
} // namespace bgfx

#endif // BX_PLATFORM_

#endif // __BGFXPLATFORM_H__
