#pragma once

#ifndef PORTSCANNER_EXPORT_H
# define PORTSCANNER_EXPORT_H

# ifdef _MSC_VER
#  ifdef PortScanner_EXPORTS
#   define PortScanner_API _declspec(dllexport)
#  elif defined USE_PortScanner_STATIC
#   define PortScanner_API
#  else
#   define PortScanner_API _declspec(dllimport)
#  endif // PortScanner_EXPORTS
# else
#  define PortScanner_API
# endif //_MSC_VER

#endif//!PORTSCANNER_EXPORT_H
