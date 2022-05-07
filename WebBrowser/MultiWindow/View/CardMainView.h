//
//  CardMainView.h
//  WebBrowser
//
//  Created by 钟武 on 2016/12/20.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import <UIKit/UIKit.h>

typedef void(^CompletionBlock)(void);

@class CardCollectionViewCell;
@class WebModel;

@interface CardMainView : UIView

- (void)reloadCardMainViewWithCompletionBlock:(CompletionBlock)completion;
- (void)changeCollectionViewLayout;

@end
