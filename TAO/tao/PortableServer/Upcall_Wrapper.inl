// -*- C++ -*-
//
// $Id$

ACE_INLINE
TAO::Upcall_Wrapper::Upcall_Wrapper (TAO::Argument * args[],
                                     size_t nargs,
                                     TAO::Argument * retval,
                                     TAO_ServerRequest & server_request,
                                     void * servant_upcall)
  : args_ (args),
    nargs_ (nargs),
    retval_ (retval),
    server_request_ (server_request),
    servant_upcall_ (servant_upcall)
{
}
