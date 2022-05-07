//
//  ZWUtility.m
//  WebBrowser
//
//  Created by 钟武 on 2016/10/27.
//  Copyright © 2022 by Eric B. All rights reserved.
//
@import ObjectiveC.runtime;
#import "ZWUtility.h"

@implementation ZWUtility

#pragma mark - Objective Runtime Method

void MethodSwizzle(Class c,SEL origSEL,SEL overrideSEL)
{
    Method origMethod = class_getInstanceMethod(c, origSEL);
    Method overrideMethod= class_getInstanceMethod(c, overrideSEL);
    if(class_addMethod(c, origSEL, method_getImplementation(overrideMethod),method_getTypeEncoding(overrideMethod)))
    {
        class_replaceMethod(c,overrideSEL, method_getImplementation(origMethod), method_getTypeEncoding(origMethod));
    }
    else
    {
        method_exchangeImplementations(origMethod,overrideMethod);
    }
}

+ (BOOL)isIphoneX{
    return (int)[[UIScreen mainScreen] nativeBounds].size.height == 2436;
}

@end
