//
//  JXLiveCoreManager.h
//  JXLiveCoreSDK
//
//  Created by roczp on 2021/8/9.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface JXLiveCoreManager : NSObject

+ (JXLiveCoreManager *)sharedInstance;
- (BOOL)initSDKWithAPPID:(NSString *)appID token:(NSString *)token;
- (void)enterRoomWithRoomID:(NSString *)roomID complete:(void(^)(BOOL success, NSError * _Nullable error, UIViewController *liveCoreVC))complete;

@end

NS_ASSUME_NONNULL_END
