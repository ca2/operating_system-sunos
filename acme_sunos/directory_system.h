#pragma once


#include "acme_posix/directory_system.h"


namespace acme_sunos
{


   class CLASS_DECL_ACME_SUNOS directory_system :
      virtual public ::acme_posix::directory_system
   {
   public:


      directory_system();
      ~directory_system() override;


      void initialize(::particle * pparticle) override;


      void init_system() override;


   };


} // namespace acme_sunos



