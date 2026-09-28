#include "platform.h"


extern "C"
void node_sunos_factory(::factory::factory * pfactory)
{

   add_factory_item < node_sunos::node, ::acme::node >();

}



