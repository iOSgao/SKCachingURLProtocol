//
//  SKCachingURLProtocol.h
//
//  Created by soonkong on 16/8/1.
//  Copyright © 2016年 S.K. All rights reserved.
//
//  ******************************************************************************************
//  SKCachingURLProtocol use the SDWebImage to offline all the image datas.  So you can use
//      the offline image in web or anywhere else.
//  (We have avoiding confrontations between SDWebImage and the NSURLProtocol. So you needn't to handling the repeated image downloading)
//
//  A quick rundown of how to use it:
//
//  1. To build, you will need the Reachability code from Apple (included). That requires that you link with
//    `SystemConfiguration.framework` and `SDWebImage`(https://github.com/rs/SDWebImage).
//
//  2. At some point early in the program (application:didFinishLaunchingWithOptions:),
//    call the following:
//
//      `[NSURLProtocol registerClass:[SKCachingURLProtocol class]];`
//
//  3. There is no step 3.
//
//
//  It's make from RNCachingURLProtocol. For more details see
//     https://github.com/rnapier/RNCachingURLProtocol
//
//  ******************************************************************************************

#import <Foundation/Foundation.h>

@interface SKCachingURLProtocol : NSURLProtocol

+ (NSSet *)supportedSchemes;
+ (void)setSupportedSchemes:(NSSet *)supportedSchemes;

- (NSString *)cachePathForRequest:(NSURLRequest *)aRequest;
- (BOOL) useCache;

@end

