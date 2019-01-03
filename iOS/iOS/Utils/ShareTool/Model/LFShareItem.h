//
//  LFShareItem.h
//  iOS
//
//  Created by mac on 2019/1/3.
//  Copyright © 2019 Mr.T. All rights reserved.
//

#import <Foundation/Foundation.h>


/**
 默认分享样式

 - kPlatformWeixinSession: 微信会话
 - kPlatformWeixinTimeline: 微信朋友圈
 - kPlatformQQFriends: QQ好友
 - kPlatformQQZone: QQ空间
 - kPlatformWeibo: 微博
 */
typedef NS_ENUM(NSInteger,LFSharePlatform){
    kPlatformWeixinSession  = 1,
    kPlatformWeixinTimeline = 2,
    kPlatformQQFriends      = 3,
    kPlatformQQZone         = 4,
    kPlatformWeibo          = 5,
};

NS_ASSUME_NONNULL_BEGIN

@interface LFShareItem : NSObject

@property (nonatomic,strong) NSString *title;
@property (nonatomic,strong) NSString *imageName;
@property (nonatomic,copy) void(^shareItemAction)(void);

@property (nonatomic,copy) void(^actionWeixinSession)(void);
@property (nonatomic,copy) void(^actionWeixinTimeline)(void);
@property (nonatomic,copy) void(^actionQQFriends)(void);
@property (nonatomic,copy) void(^actionQQZone)(void);
@property (nonatomic,copy) void(^actionWeibo)(void);

@end

NS_ASSUME_NONNULL_END
