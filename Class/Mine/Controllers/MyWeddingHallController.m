//
//  MyWeddingHallController.m
//  ESL
//
//  Created by 徐恒 on 16/9/27.
//  Copyright © 2016年 cl. All rights reserved.
//

#import "MyWeddingHallController.h"

@interface MyWeddingHallController ()

@end

@implementation MyWeddingHallController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.navigationItem.title = @"我的喜事堂";
    self.view.backgroundColor = [UIColor whiteColor];
    self.tabBarController.tabBar.hidden = YES;
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
