#pragma once


#include "aura/_.h"
#include "aura_posix/_.h"
#include "apex_sunos/_.h"


#if defined(_AURA_SUNOS_LIBRARY)
#define CLASS_DECL_AURA_SUNOS  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_AURA_SUNOS  CLASS_DECL_IMPORT
#endif



