//
//  JXLiveCoreManager.m
//  JXLiveCoreSDK
//
//  Created by roczp on 2021/8/9.
//

#import "JXLiveCoreManager.h"
#import "JXLiveCoreViewController.h"

@implementation JXLiveCoreManager

static JXLiveCoreManager *manager = nil;
+ (JXLiveCoreManager *)sharedInstance {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[JXLiveCoreManager alloc] init];
    });
    return manager;
}

- (BOOL)initSDKWithAPPID:(NSString *)appID token:(NSString *)token {
    //TODO: 初始化SDK
    return YES;
}

- (void)enterRoomWithRoomID:(NSString *)roomID complete:(nonnull void (^)(BOOL, NSError * _Nullable, UIViewController * _Nonnull))complete {
    //TODO: 进房逻辑
    JXLiveCoreViewController *liveCoreVC = [[JXLiveCoreViewController alloc] init];
    !complete?:complete(YES, nil, liveCoreVC);
}

@end
