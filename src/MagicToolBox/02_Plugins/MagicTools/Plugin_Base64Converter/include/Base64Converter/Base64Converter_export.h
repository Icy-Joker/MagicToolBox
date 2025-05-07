#pragma once

#ifndef BASE64CONVERTER_EXPORT_H
# define BASE64CONVERTER_EXPORT_H

# ifdef _MSC_VER
#  ifdef Base64Converter_EXPORTS
#   define Base64Converter_API _declspec(dllexport)
#  elif defined USE_Base64Converter_STATIC
#   define Base64Converter_API
#  else
#   define Base64Converter_API _declspec(dllimport)
#  endif // Base64Converter_EXPORTS
# else
#  define Base64Converter_API
# endif //_MSC_VER

#endif//!BASE64CONVERTER_EXPORT_H
