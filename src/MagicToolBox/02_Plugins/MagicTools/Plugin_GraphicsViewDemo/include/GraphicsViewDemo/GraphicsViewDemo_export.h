#pragma once

#ifndef GRAPHICSVIEWDEMO_EXPORT_H
# define GRAPHICSVIEWDEMO_EXPORT_H

# ifdef _MSC_VER
#  ifdef GraphicsViewDemo_EXPORTS
#   define GraphicsViewDemo_API _declspec(dllexport)
#  elif defined USE_GraphicsViewDemo_STATIC
#   define GraphicsViewDemo_API
#  else
#   define GraphicsViewDemo_API _declspec(dllimport)
#  endif // GraphicsViewDemo_EXPORTS
# else
#  define GraphicsViewDemo_API
# endif //_MSC_VER

#endif//!GRAPHICSVIEWDEMO_EXPORT_H
