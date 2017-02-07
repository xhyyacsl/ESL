//
//  ThreeImageTableViewCell.h
//  ESL
//
//  Created by eyou on 16/9/19.
//  Copyright © 2016年 cl. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "ModelCell.h"

@interface ThreeImageTableViewCell : ModelCell

@property (strong, nonatomic)UIButton *btn1;
@property (strong, nonatomic)UIButton *btn2;
@property (strong, nonatomic)UIButton *btn3;
@property (nonatomic, strong)UIImageView *imageBuy;
@property (nonatomic, strong)NSTimer *timer;
-(void)initContentWithStr:(NSString *)string;
-(void)setBaseModel:(ESLBaseModel *)model;
@end