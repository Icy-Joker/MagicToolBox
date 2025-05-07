#pragma once

#ifndef MARKDOWNEDITOR_EXPORT_H
# define MARKDOWNEDITOR_EXPORT_H

# ifdef _MSC_VER
#  ifdef MarkDownEditor_EXPORTS
#   define MarkDownEditor_API _declspec(dllexport)
#  elif defined USE_MarkDownEditor_STATIC
#   define MarkDownEditor_API
#  else
#   define MarkDownEditor_API _declspec(dllimport)
#  endif // MarkDownEditor_EXPORTS
# else
#  define MarkDownEditor_API
# endif //_MSC_VER

#endif//!MARKDOWNEDITOR_EXPORT_H
