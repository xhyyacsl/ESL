//
//  XHXiShiTangController.h
//  YY
//
//  Created by 徐恒 on 16/4/23.
//  Copyright © 2016年 XH. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XiShiTangModel.h"
@interface XHXiShiTangController : UIViewController
@property (nonatomic, assign)BOOL isFromOther;
@property (nonatomic, copy)void(^confirmBlock)(CLVillageModel *village);

@end
