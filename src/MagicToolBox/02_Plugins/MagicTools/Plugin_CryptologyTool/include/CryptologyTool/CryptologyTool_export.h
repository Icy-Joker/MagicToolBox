#pragma once

#ifndef CRYPTOLOGYTOOL_EXPORT_H
# define CRYPTOLOGYTOOL_EXPORT_H

# ifdef _MSC_VER
#  ifdef CryptologyTool_EXPORTS
#   define CryptologyTool_API _declspec(dllexport)
#  elif defined USE_CryptologyTool_STATIC
#   define CryptologyTool_API
#  else
#   define CryptologyTool_API _declspec(dllimport)
#  endif // CryptologyTool_EXPORTS
# else
#  define CryptologyTool_API
# endif //_MSC_VER

#endif//!CRYPTOLOGYTOOL_EXPORT_H
