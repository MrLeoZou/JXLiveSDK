//
//  JXLiveSdkManager.m
//  JXLiveSDK
//
//  Created by roczp on 2021/8/10.
//

#import "JXLiveSdkManager.h"
#import <JXLiveCoreSDK/JXLiveCoreSDK.h>
#import "JXLiveSDKService.h"
#import "JXLiveViewController.h"

@interface JXLiveSdkManager ()<JXLiveSDKProtocol>

@end

@implementation JXLiveSdkManager

static JXLiveSdkManager *manager = nil;
+ (JXLiveSdkManager *)sharedInstance {
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        manager = [[JXLiveSdkManager alloc] init];
    });
    return manager;
}

- (BOOL)initSDKWithAPPID:(NSString *)appID token:(NSString *)token {
    //TODO: 初始化SDK
    return [[JXLiveCoreManager sharedInstance] initSDKWithAPPID:appID token:token];
}

- (void)enterRoomWithRoomID:(NSString *)roomID complete:(nonnull void (^)(BOOL, NSError * _Nullable, UIViewController * _Nullable))complete {
    //TODO: 进房逻辑
    [[JXLiveCoreManager sharedInstance] enterRoomWithRoomID:roomID complete:^(BOOL success, NSError * _Nullable error, UIViewController * _Nonnull liveCoreVC) {
        if (success) {
            JXLiveViewController *liveVC = [[JXLiveViewController alloc] init];
            [liveCoreVC addChildViewController:liveVC];
            [liveCoreVC.view addSubview:liveVC.view];
            !complete?:complete(YES, nil, liveCoreVC);
        }else{
            !complete?:complete(NO, nil, nil);
        }
    }];
}

@end
