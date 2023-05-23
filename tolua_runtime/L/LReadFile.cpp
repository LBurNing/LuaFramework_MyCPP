#include "LGlobal.h"
#include <stdio.h>
#include <stdlib.h>
#include <vector>

static int lhh_readfile(lua_State* L)
{
    const char* path = lua_tostring(L, 1);
    FILE* file = fopen(path, "rb");

    if (file != NULL)
    {
        fseek(file, 0, SEEK_END);
        int fileSize = ftell(file);
        fseek(file, 0, SEEK_SET);

        int bufferSize = fileSize + 1;
        char* buffer = (char*)malloc(bufferSize);

        if (buffer != NULL)
        {
            buffer[fileSize] = '\0';

            if (buffer != NULL)
            {
                int result = fread(buffer, 1, fileSize, file);
                lua_pushstring(L, (const char*)buffer);
                free(buffer);
            }
            else
            {

            }
        }

        fclose(file);
    }

    return 1;
}

static const struct luaL_Reg l_tolua_funcs[] =
{
    { "Get", lhh_readfile},
    { NULL, NULL }
};

EXTERN_API void InitFrame(lua_State* L)
{
    luaL_register(L, "lhh", l_tolua_funcs);
}