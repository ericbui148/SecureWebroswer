//
//  HTTPURLConfiguration.h
//  ZhihuDaily
//
//  Created by 钟武 on 16/8/3.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import <Foundation/Foundation.h>
#define SYNTHESIZE_SINGLETON_FOR_CLASS_HEADER(HTTPURLConfiguration)
@interface HTTPURLConfiguration : NSObject

- (NSString *)baiduURLWithPath:(NSString *)path;

@end
