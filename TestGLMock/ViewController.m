//
//  ViewController.m
//  TestGLMock
//
//  Created by 雷刚 on 16/6/14.
//  Copyright © 2016年 eqiwan. All rights reserved.
//

#import "ViewController.h"

// 1.引入GLMock
#import <GLMock/GLMock.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
}

- (IBAction)mock:(id)sender{
//    // 2.调用接口《/china/weather》
//    NSString *weather = [GLMock mockWithApi:@"/china/weather"];
//    NSLog(@"response:%@",weather);
//    // 3.把字符串转为字典、数组
//    id body = [GLMock parsingJsonString:weather];
//    NSLog(@"%@",body);
    
    
    
    // 2.调用接口《test》
    NSString *testApi = [GLMock mockWithApi:@"testApi"];
    NSLog(@"response:%@",testApi);
    // 3.把字符串转为字典、数组
    id body2 = [GLMock parsingJsonString:testApi];
    NSLog(@"%@",body2);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
