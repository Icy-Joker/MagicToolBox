#pragma once

#ifndef QRCODEGENERATOR_EXPORT_H
# define QRCODEGENERATOR_EXPORT_H

# ifdef _MSC_VER
#  ifdef QRCodeGenerator_EXPORTS
#   define QRCodeGenerator_API _declspec(dllexport)
#  elif defined USE_QRCodeGenerator_STATIC
#   define QRCodeGenerator_API
#  else
#   define QRCodeGenerator_API _declspec(dllimport)
#  endif // QRCodeGenerator_EXPORTS
# else
#  define QRCodeGenerator_API
# endif //_MSC_VER

#endif//!QRCODEGENERATOR_EXPORT_H
