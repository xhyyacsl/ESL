//
//  CookToJoinModel.h
//  YY
//
//  Created by 赵洁 on 16/7/15.
//  Copyright © 2016年 徐恒. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CookToJoinModel : NSObject
@property (strong,nonatomic) NSString *ID;
@property (strong,nonatomic) NSString *Name;
@property (nonatomic, strong)NSString*CityID;
@property (nonatomic, strong)NSString*CountyID;
@property (nonatomic, strong)NSString*CountyName;
@end
