//
//  ZBLHttpLocalServer.h
//  m3u8DownloadSimpleDemo
//
//  Created by Bennie on 2019/4/29.
//  Copyright © 2019年 Bennie. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ZBLHttpLocalServer : NSObject
@property (strong, nonatomic) NSString *documentRoot;
@property (assign, nonatomic) NSInteger port;
+ (instancetype)shareInstance;
- (void)tryStart;
- (void)tryStop;
@end

NS_ASSUME_NONNULL_END
