#pragma once


// GDK, GTK :: C

extern "C"
{


   void sunos_g_direct_init();
   void sunos_g_direct_term();
   //void * sunos_g_direct_app_indicator_new(const char * pszId, const char * pszIcon, const char * pszFolder, struct user_notify_icon_bridge * pbridge);
   void sunos_g_direct_step(void * pind);
   //void sunos_g_direct_app_indicator_term(void * pind);


} // extern "C"




#include "xfce_shared.h"




