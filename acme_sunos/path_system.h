// Create on 2021-03-22 09:12 <3ThomasBS_
#pragma once


#include "acme_posix/path_system.h"


namespace acme_sunos
{


   class CLASS_DECL_ACME_SUNOS path_system :
      virtual public ::acme_posix::path_system
   {
   public:


      path_system();
      ~path_system() override;


      //virtual ::file::path app_module() override;


   };


} // namespace acme_sunos



