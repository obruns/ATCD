// Addr.cpp
// $Id$

#include "ace/Addr.h"
#include "ace/Log_Msg.h"
#include "ace/OS.h"

ACE_RCSID(ace, Addr, "$Id$")

// Note: this object requires static construction and destruction.
/* static */
const ACE_Addr ACE_Addr::sap_any (AF_ANY, -1);

#if !defined (__ACE_INLINE__)
#include "ace/Addr.i"
#endif /* __ACE_INLINE__ */

ACE_ALLOC_HOOK_DEFINE(ACE_Addr)

void
ACE_Addr::dump (void) const
{
#if defined (ACE_HAS_DUMP)
  ACE_TRACE ("ACE_Addr::dump");

  ACE_DEBUG ((LM_DEBUG, ACE_BEGIN_DUMP, this));
  ACE_DEBUG ((LM_DEBUG, ACE_LIB_TEXT ("addr_type_ = %d"), this->addr_type_));
  ACE_DEBUG ((LM_DEBUG, ACE_LIB_TEXT ("\naddr_size_ = %d"), this->addr_size_));
  ACE_DEBUG ((LM_DEBUG, ACE_END_DUMP));
#endif /* ACE_HAS_DUMP */
}

// Initializes instance variables.

void
ACE_Addr::base_set (int type, int size)
{
  this->addr_type_ = type;
  this->addr_size_ = size;
}

// Initializes instance variables.  Note that 0 is an unspecified
// protocol family type...

ACE_Addr::ACE_Addr (int type, int size)
{
  this->base_set (type, size);
}

ACE_Addr::~ACE_Addr (void)
{
}
