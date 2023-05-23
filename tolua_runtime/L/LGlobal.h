#define FRAME_API extern "C" __declspec(dllexport)
#define EXTERN_API extern "C"

extern "C"
{
	#include "lua.h"
	#include "lualib.h"
	#include "lauxlib.h"
	#include "luaconf.h"
}


