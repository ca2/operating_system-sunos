#include "framework.h"


__FACTORY_EXPORT aura_sunos_factory(::factory::factory * pfactory);


__FACTORY_EXPORT node_xfce_factory(::factory::factory * pfactory);


__FACTORY_EXPORT desktop_environment_xfce_factory(::factory::factory * pfactory)
{

   aura_sunos_factory(pfactory);

   node_xfce_factory(pfactory);

   pfactory->add_factory_item < ::desktop_environment_xfce::node, ::acme::node > ();


}



