#ifndef SPEECH_GLOBAL_H
#define SPEECH_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(SPEECH_LIBRARY)
#  define SPEECHSHARED_EXPORT Q_DECL_EXPORT
#else
#  define SPEECHSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // SPEECH_GLOBAL_H
