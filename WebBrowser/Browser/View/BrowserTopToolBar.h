//
//  BrowserTopToolBar.h
//  WebBrowser
//
//  Created by 钟武 on 2016/10/12.
//  Copyright © 2021 by HKTalk. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BrowserWebView.h"
#import "NJKWebViewProgress.h"

@interface BrowserTopToolBar : UIView <WebViewDelegate, NJKWebViewProgressDelegate>

- (void)setTopURLOrTitle:(NSString *)urlOrTitle;

@end
