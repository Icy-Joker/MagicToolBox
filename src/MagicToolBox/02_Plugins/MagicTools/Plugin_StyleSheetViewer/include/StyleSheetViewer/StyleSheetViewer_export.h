#pragma once

#ifndef STYLESHEETVIEWER_EXPORT_H
# define STYLESHEETVIEWER_EXPORT_H

# ifdef _MSC_VER
#  ifdef StyleSheetViewer_EXPORTS
#   define StyleSheetViewer_API _declspec(dllexport)
#  elif defined USE_StyleSheetViewer_STATIC
#   define StyleSheetViewer_API
#  else
#   define StyleSheetViewer_API _declspec(dllimport)
#  endif // StyleSheetViewer_EXPORTS
# else
#  define StyleSheetViewer_API
# endif //_MSC_VER

#endif//!STYLESHEETVIEWER_EXPORT_H
