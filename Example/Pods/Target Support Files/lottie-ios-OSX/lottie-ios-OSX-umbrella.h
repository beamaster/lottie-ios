#ifdef __OBJC__
#import <Cocoa/Cocoa.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "LOTAnimationTransitionController.h"
#import "LOTAnimationView.h"
#import "LOTAnimationView_Compat.h"
#import "Lottie.h"

FOUNDATION_EXPORT double LottieVersionNumber;
FOUNDATION_EXPORT const unsigned char LottieVersionString[];

