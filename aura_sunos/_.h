#pragma once


#include "aura/_.h"
#include "operating_system-posix/aura_posix/_.h"
#include "operating_system-sunos/apex_sunos/_.h"


#if defined(_AURA_SUNOS_LIBRARY)
#define CLASS_DECL_AURA_SUNOS  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_AURA_SUNOS  CLASS_DECL_IMPORT
#endif




