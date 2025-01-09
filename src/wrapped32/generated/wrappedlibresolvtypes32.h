/*********************************************************************
 * File automatically generated by rebuild_wrappers_32.py (v0.0.2.2) *
 *********************************************************************/
#ifndef __wrappedlibresolvTYPES32_H_
#define __wrappedlibresolvTYPES32_H_

#ifndef LIBNAME
#error You should only #include this file inside a wrapped*.c file
#endif
#ifndef ADDED_FUNCTIONS
#define ADDED_FUNCTIONS() 
#endif

typedef int32_t (*iFpip_t)(void*, int32_t, void*);
typedef int32_t (*iFpuip_t)(void*, uint32_t, int32_t, void*);
typedef int32_t (*iEpiipi_t)(void*, int32_t, int32_t, void*, int32_t);
typedef int32_t (*iFpiipi_t)(void*, int32_t, int32_t, void*, int32_t);
typedef int32_t (*iFppppi_t)(void*, void*, void*, void*, int32_t);
typedef int32_t (*iFppiipi_t)(void*, void*, int32_t, int32_t, void*, int32_t);

#define SUPER() ADDED_FUNCTIONS() \
	GO(ns_initparse, iFpip_t) \
	GO(ns_parserr, iFpuip_t) \
	GO(__res_query, iEpiipi_t) \
	GO(res_query, iEpiipi_t) \
	GO(res_search, iEpiipi_t) \
	GO(__res_search, iFpiipi_t) \
	GO(__dn_expand, iFppppi_t) \
	GO(__res_nquery, iFppiipi_t) \
	GO(__res_nsearch, iFppiipi_t)

#endif // __wrappedlibresolvTYPES32_H_
