//
//  JXLiveSDKService.h
//  JXLiveSDK
//
//  Created by roczp on 2021/8/10.
//

#ifndef JXLiveSDKService_h
#define JXLiveSDKService_h

#pragma mark - Notifications

static NSNotificationName _Nonnull kNotificationLivePageDidAppear = @"kNotificationLivePageDidAppear";

#pragma mark - URL routers


#pragma mark - Model Protocols

@protocol JXLiveInfoProtocol <NSObject>

- (NSString *_Nullable)roomID;
- (NSString *_Nullable)anchorID;
- (NSString *_Nullable)anchorName;

@end

#pragma mark - Manager Protocol

@protocol JXLiveSDKProtocol <NSObject>

- (BOOL)initSDKWithAPPID:(NSString *_Nonnull)appID token:(NSString *_Nonnull)token;
- (void)enterRoomWithRoomID:(NSString *_Nonnull)roomID complete:(void(^_Nonnull)(BOOL success, NSError * _Nullable error, UIViewController * _Nullable liveVC))complete;

@end

#endif /* JXLiveSDKService_h */
