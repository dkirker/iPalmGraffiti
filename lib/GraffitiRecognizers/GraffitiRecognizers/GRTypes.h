#ifndef __GR_TYPES_H__
#define __GR_TYPES_H__

#include <vector>
#include <CoreGraphics/CGBase.h>

typedef unsigned char        uchar;
typedef signed char          schar;
typedef uchar                byte;

typedef unsigned short       ushort;
typedef signed short         sshort;

typedef unsigned long        ulong;
typedef signed long          slong;

typedef unsigned long long   ulonglong;
typedef signed long long     slonglong;

typedef std::vector< CGFloat >     CGFloat_vt   ;
typedef CGFloat_vt::const_iterator CGFloat_vt_ci;
typedef CGFloat_vt::iterator       CGFloat_vt_i ;


#endif //__GR_TYPES_H__

