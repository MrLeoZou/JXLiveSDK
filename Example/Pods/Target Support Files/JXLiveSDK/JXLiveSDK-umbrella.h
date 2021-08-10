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

#import "JXLiveSDK.h"
#import "JXLiveSdkManager.h"
#import "JXLiveSDKService.h"
#import "JXLiveViewController.h"

FOUNDATION_EXPORT double JXLiveSDKVersionNumber;
FOUNDATION_EXPORT const unsigned char JXLiveSDKVersionString[];

