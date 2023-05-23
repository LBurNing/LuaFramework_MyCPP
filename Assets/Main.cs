using UnityEngine;
using System.Collections;


/// <summary>
/// </summary>
public class Main : MonoBehaviour
{
    void Start()
    {
        LuaInterface.LuaState luaState = new LuaInterface.LuaState();
        luaState.Start();

        luaState.DoFile("Main.lua");
        luaState.Call("Main", true);
    }
}
