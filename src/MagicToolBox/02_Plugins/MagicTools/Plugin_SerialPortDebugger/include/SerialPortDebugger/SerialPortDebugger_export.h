#pragma once

#ifndef SERIALPORTDEBUGGER_EXPORT_H
# define SERIALPORTDEBUGGER_EXPORT_H

# ifdef _MSC_VER
#  ifdef SerialPortDebugger_EXPORTS
#   define SerialPortDebugger_API _declspec(dllexport)
#  elif defined USE_SerialPortDebugger_STATIC
#   define SerialPortDebugger_API
#  else
#   define SerialPortDebugger_API _declspec(dllimport)
#  endif // SerialPortDebugger_EXPORTS
# else
#  define SerialPortDebugger_API
# endif //_MSC_VER

#endif//!SERIALPORTDEBUGGER_EXPORT_H
