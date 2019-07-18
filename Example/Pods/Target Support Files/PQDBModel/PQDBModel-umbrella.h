#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "JKDBHelper.h"
#import "JKDBModel.h"

FOUNDATION_EXPORT double PQDBModelVersionNumber;
FOUNDATION_EXPORT const unsigned char PQDBModelVersionString[];

