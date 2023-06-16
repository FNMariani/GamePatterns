// Fill out your copyright notice in the Description page of Project Settings.


#include "ULuaBlueprintsBFL.h"

void UULuaBlueprintsBFL::RunLua(const FString& code)
{
	lua_State* L = luaL_newstate();
	luaL_openlibs(L);

	int result = luaL_dostring(L, TCHAR_TO_ANSI(*code));

	if (result != 0)
	{
		UE_LOG(LogTemp, Error, TEXT("Lua Script error: %s"), ANSI_TO_TCHAR(lua_tostring(L, -1)));
	}
	
	lua_close(L);
}
