#pragma once


#include "operating_system-posix/acme_posix/_.h"


#if defined(_acme_sunos_project)
#define CLASS_DECL_ACME_SUNOS  CLASS_DECL_EXPORT
#else
#define CLASS_DECL_ACME_SUNOS  CLASS_DECL_IMPORT
#endif



//CLASS_DECL_ACME_SUNOS ::user::enum_desktop get_edesktop();




