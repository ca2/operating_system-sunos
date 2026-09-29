#include "platform.h"
#include "apex/platform/launcher.h"
#include "launcher.h"
//#include "os_context.h"
//#include "ip_enum.h"
//#include "interprocess_communication.h"
#include "service_handler.h"
#include "node.h"
#include "apex/parallelization/service.h"
#include "apex/parallelization/service_handler.h"
#include "service_handler.h"


DECLARE_FACTORY(acme_sunos);


IMPLEMENT_FACTORY(apex_sunos)
{

   acme_sunos_factory(pfactory);


   //add_factory_item < ::sunos::stdio_file, ::file::text_file >();
   //add_factory_item < ::sunos::file, ::file::file >();
   //pfactory->add_factory_item < ::apex_sunos::os_context, ::os_context >();
   //pfactory->add_factory_item < ::sunos::pipe, ::process::pipe >();
   //pfactory->add_factory_item < ::sunos::process, ::process::process >();

   //add_factory_item < ::sunos::console, ::console::console >();
   //pfactory->add_factory_item < ::sunos::crypto, ::crypto::crypto >();
   //pfactory->add_factory_item < ::apex_sunos::ip_enum, ::networking::ip_enum >();


   //pfactory->add_factory_item < ::apex_sunos::interprocess_communication_base, ::interprocess_communication::base >();
   //pfactory->add_factory_item < ::apex_sunos::interprocess_communication_rx, ::interprocess_communication::rx >();
   //pfactory->add_factory_item < ::apex_sunos::interprocess_communication_tx, ::interprocess_communication::tx >();
   //add_factory_item < ::sunos::interprocess_communication, ::interprocess_communication::interprocess_communication >();


   //add_factory_item < ::sunos::buffer, ::graphics::graphics >();
   //add_factory_item < ::sunos::interaction_impl, ::user::interaction_impl >();

   //pfactory->add_factory_item < ::file::os_watcher, ::file::watcher >();
   //pfactory->add_factory_item < ::file::os_watch, ::file::watch >();

   //pfactory->add_factory_item < ::apex_sunos::file_context, ::file_context >();
   pfactory->add_factory_item < ::apex_sunos::service_handler, ::service_handler >();

   pfactory->add_factory_item < ::apex_sunos::node, ::platform::node >();

   //add_factory_item < ::sunos::copydesk, ::user::cop
   // 
   // 
   // ydesk >();
   ////add_factory_item < ::sunos::shell, ::user::shell >();


}




