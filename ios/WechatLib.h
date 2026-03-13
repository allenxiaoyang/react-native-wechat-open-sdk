#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#import <React/RCTBridge.h>
#import <React/RCTBridgeModule.h>
#if __has_include(<WechatOpenSDK/WXApi.h>)
#import <WechatOpenSDK/WXApi.h>
#else
#import "WXApi.h"
#endif
#if __has_include(<WechatOpenSDK/WechatAuthSDK.h>)
#import <WechatOpenSDK/WechatAuthSDK.h>
#else
#import "WechatAuthSDK.h"
#endif

// define share type constants
#define RCTWXShareTypeNews @"news"
#define RCTWXShareTypeThumbImageUrl @"thumbImage"
#define RCTWXShareTypeImageUrl @"imageUrl"
#define RCTWXShareTypeImageFile @"imageFile"
#define RCTWXShareTypeImageResource @"imageResource"
#define RCTWXShareTypeText @"text"
#define RCTWXShareTypeVideo @"video"
#define RCTWXShareTypeAudio @"audio"
#define RCTWXShareTypeFile @"file"

#define RCTWXShareType @"type"
#define RCTWXShareTitle @"title"
#define RCTWXShareDescription @"description"
#define RCTWXShareWebpageUrl @"webpageUrl"
#define RCTWXShareImageUrl @"imageUrl"

#define RCTWXEventName @"WeChat_Resp"
#define RCTWXEventNameWeChatReq @"WeChat_Req"

@interface WechatLib : NSObject <RCTBridgeModule, WXApiDelegate, WechatAuthAPIDelegate>

@property (nonatomic, weak) RCTBridge *bridge;
@property NSString* appId;

@end
