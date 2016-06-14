//
//  GLMock.h
//  GLMock
//
//  Created by 雷刚 on 16/6/12.
//  Copyright © 2016年 eqiwan.cn All rights reserved.
//

/******************************************************
 * 1.导入GLMock.framework和mock.plist文件到项目中
 * 2.在mock.plist中添加自己的《接口名》和《接口协议》格式，如:
 {
    "接口名称":"定义的接口协议（JSON格式）",
    "home",{"ad":[{"icon":"http://www.eqiwan.cn","title","推广活动1"}],"recommend":[{"productId":1123,"productName":"推荐产品1","price":1999.99}]}...
 }
 【注意：整型和浮点型设置的数值将会作为Mock随机的范围值，如：productId的Mock数据范围是0-1123，price的Mock数据范围是0-1999.99】
 * 3.使用Mock数据，
   #import "GLMock.h"
   NSString *response = [GLMock mockWithApi:@"home"];
   [GLMock isJsonString:response];    // 查看Mock数据是否是JSON格式
 *
 ******************************************************/

#import <Foundation/Foundation.h>

@interface GLMock : NSObject

/**
 *  模拟接口数据
 *
 *  @param api 接口名称
 */
+ (NSString *)mockWithApi:(NSString *)api;

/**
 *  判断是否是JSON字符串
 *
 *  @param jsonValue 字符串
 *
 *  @return 解析成功/失败
 */
+ (BOOL)isJsonString:(NSString *)jsonString;

@end
