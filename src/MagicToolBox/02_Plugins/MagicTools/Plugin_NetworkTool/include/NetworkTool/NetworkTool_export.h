#pragma once

#ifndef NETWORKTOOL_EXPORT_H
# define NETWORKTOOL_EXPORT_H

# ifdef _MSC_VER
#  ifdef NetworkTool_EXPORTS
#   define NetworkTool_API _declspec(dllexport)
#  elif defined USE_NetworkTool_STATIC
#   define NetworkTool_API
#  else
#   define NetworkTool_API _declspec(dllimport)
#  endif // NetworkTool_EXPORTS
# else
#  define NetworkTool_API
# endif //_MSC_VER

#endif//!NETWORKTOOL_EXPORT_H
