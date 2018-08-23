//
//  NetworkHelper.h
//  FlowerField
//
//  Created by 郑佳 on 2017/8/20.
//  Copyright © 2017年 Triangle. All rights reserved.
//

#import <Foundation/Foundation.h>

FOUNDATION_EXTERN NSString * const POST;
FOUNDATION_EXTERN NSString * const GET;

@interface NetworkHelper : NSObject

+ (instancetype)sharedInstance;
//
//- (void)requestMethod:(NSString *)method url:(NSString *)url parameters:(id)parameters finishBlock:(void (^)(id data, NSError *error))finishBlock;

- (void)GET:(NSString *)URLString parameters:(id)parameters finishBlock:(void (^)(id data, NSError *error))finishBlock;

- (void)POST:(NSString *)URLString parameters:(id)parameters finishBlock:(void (^)(id data, NSError *error))finishBlock;

@end
