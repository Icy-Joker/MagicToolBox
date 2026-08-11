#pragma once

#ifndef CHARTDEMO_EXPORT_H
# define CHARTDEMO_EXPORT_H

# ifdef _MSC_VER
#  ifdef ChartDemo_EXPORTS
#   define ChartDemo_API _declspec(dllexport)
#  elif defined USE_ChartDemo_STATIC
#   define ChartDemo_API
#  else
#   define ChartDemo_API _declspec(dllimport)
#  endif // ChartDemo_EXPORTS
# else
#  define ChartDemo_API
# endif //_MSC_VER

#endif//!CHARTDEMO_EXPORT_H
