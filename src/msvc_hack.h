// The greatest evil MSVC hack!
#ifdef _MSC_VER
	#ifndef uint
		#define uint unsigned int
	#endif
	#pragma warning (disable : 4005)
	#define _CRT_SECURE_NO_WARNINGS
	#define strdup _strdup
	#define strncasecmp _strnicmp
	#define strcasecmp _stricmp
#endif
