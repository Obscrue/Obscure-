#pragma once

#ifdef OS_PLATFORM_WINDOWS
	#ifdef OS_BUILD_DLL
		#define OBSCURE_API __declspec(dllexport)
	#else
		#define OBSCURE_API __declspec(dllimport)
	#endif
#else
	#error Obscure only support Windows!
#endif 
