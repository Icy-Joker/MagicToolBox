#pragma once

#ifndef JSONVISUALEDITOR_EXPORT_H
# define JSONVISUALEDITOR_EXPORT_H

# ifdef _MSC_VER
#  ifdef JsonVisualEditor_EXPORTS
#   define JsonVisualEditor_API _declspec(dllexport)
#  elif defined USE_JsonVisualEditor_STATIC
#   define JsonVisualEditor_API
#  else
#   define JsonVisualEditor_API _declspec(dllimport)
#  endif // JsonVisualEditor_EXPORTS
# else
#  define JsonVisualEditor_API
# endif //_MSC_VER

#endif//!JSONVISUALEDITOR_EXPORT_H
