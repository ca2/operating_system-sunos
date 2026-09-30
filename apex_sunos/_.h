#pragma once


#include "apex/_.h"
#include "operating_system-posix/apex_posix/_.h"
#include "operating_system-sunos/acme_sunos/_.h"


#if defined(_APEX_SUNOS_LIBRARY)
#define CLASS_DECL_APEX_SUNOS  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_APEX_SUNOS  CLASS_DECL_IMPORT
#endif


namespace apex_sunos
{


   //class dir_context;
   //class dir_system;

   //class file_context;
   //class file_system;

   class node;


} // namespace apex_sunos



