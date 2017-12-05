//
//  SLRequestDecorator.h
//  Rexxar
//
//  Created by GUO Lin on 7/1/16.
//  Copyright © 2016 Douban.Inc. All rights reserved.
//

#import "SLDecorator.h"

NS_ASSUME_NONNULL_BEGIN

/**
 * `SLRequestDecorator` 是一个具体的请求装修器。
 * 通过该装修器对 Rexxar-Conntainer 中发出的请求作修改。增加其 url 参数，以及增添自定义 header。
 */
@interface SLRequestDecorator : SLDecorator

/**
 * 需要为请求增添的自定义 header。
 */
@property (nonatomic, copy) NSDictionary *headers;

/**
 * 需要为请求增添的 url 参数。
 */
@property (nonatomic, copy) NSDictionary *parameters;

/**
 * 初始化一个请求装修器。
 *
 * @param headers 需要为请求增添的自定义 header
 * @param parameters 需要为请求增添的 url 参数
 */
- (instancetype)initWithHeaders:(NSDictionary *)headers
                     parameters:(NSDictionary *)parameters;

@end

NS_ASSUME_NONNULL_END
