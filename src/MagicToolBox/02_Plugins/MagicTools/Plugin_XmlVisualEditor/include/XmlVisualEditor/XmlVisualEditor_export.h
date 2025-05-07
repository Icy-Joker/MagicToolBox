#pragma once

#ifndef VISUALXMLEDITOR_EXPORT_H
# define VISUALXMLEDITOR_EXPORT_H

# ifdef _MSC_VER
#  ifdef XmlVisualEditor_EXPORTS
#   define XmlVisualEditor_API _declspec(dllexport)
#  elif defined USE_XmlVisualEditor_STATIC
#   define XmlVisualEditor_API
#  else
#   define XmlVisualEditor_API _declspec(dllimport)
#  endif // XmlVisualEditor_EXPORTS
# else
#  define XmlVisualEditor_API
# endif //_MSC_VER

#endif//!VISUALXMLEDITOR_EXPORT_H
