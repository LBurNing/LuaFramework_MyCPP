function Main()					
	print("Version: ".._VERSION)
	local sStr = tolua.Get("D:\\UnityProject\\LuaFramework\\Temp.txt")
	print("sStr: "..sStr)
end