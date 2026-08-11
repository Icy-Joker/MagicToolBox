#pragma once

#ifndef MEDIAPLAYER_EXPORT_H
# define MEDIAPLAYER_EXPORT_H

# ifdef _MSC_VER
#  ifdef MediaPlayer_EXPORTS
#   define MediaPlayer_API _declspec(dllexport)
#  elif defined USE_MediaPlayer_STATIC
#   define MediaPlayer_API
#  else
#   define MediaPlayer_API _declspec(dllimport)
#  endif // MediaPlayer_EXPORTS
# else
#  define MediaPlayer_API
# endif //_MSC_VER

#endif//!MEDIAPLAYER_EXPORT_H
