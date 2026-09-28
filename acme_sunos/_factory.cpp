#include "platform.h"
#include "node.h"
#include "directory_context.h"
#include "file_context.h"
#include "path_system.h"
#include "directory_system.h"
#include "file_system.h"



__FACTORY_EXPORT void acme_posix_factory(::factory::factory * pfactory);


__FACTORY_EXPORT void acme_sunos_factory(::factory::factory * pfactory)
{

   acme_posix_factory(pfactory);


   pfactory->add_factory_item < ::acme_sunos::directory_system, ::directory_system >();
   pfactory->add_factory_item < ::acme_sunos::file_system, ::file_system >();

   pfactory->add_factory_item < ::acme_sunos::directory_context, ::directory_context >();
   pfactory->add_factory_item < ::acme_sunos::file_context, ::file_context >();


   pfactory->add_factory_item < ::acme_sunos::node, ::platform::node >();
   //pfactory->add_factory_item < ::acme_sunos::acme_directory, ::acme_directory >();
   //pfactory->add_factory_item < ::acme_sunos::acme_file, ::acme_file >();
   pfactory->add_factory_item < ::acme_sunos::path_system, ::path_system >();


//   pfactory->add_factory_item < ::acme_sunos::file, ::file::file >();


}


