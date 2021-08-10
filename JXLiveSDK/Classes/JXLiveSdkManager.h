//
//  JXLiveSdkManager.h
//  JXLiveSDK
//
//  Created by roczp on 2021/8/10.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXLiveSdkManager : NSObject

+ (JXLiveSdkManager *)sharedInstance;
- (BOOL)initSDKWithAPPID:(NSString *)appID token:(NSString *)token;
- (void)enterRoomWithRoomID:(NSString *)roomID complete:(void(^)(BOOL success, NSError * _Nullable error, UIViewController * _Nullable liveVC))complete;
@end

NS_ASSUME_NONNULL_END
