//
//  PersonalCell.m
//  YY
//
//  Created by 徐恒 on 16/7/1.
//  Copyright © 2016年 徐恒. All rights reserved.
//

#import "PersonalCell.h"

@implementation PersonalCell

- (void)awakeFromNib {
    [super awakeFromNib];
    // Initialization code
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}
- (void)drawRect:(CGRect)rect
{
    self.imgView.layer.cornerRadius = 30;
    self.imgView.layer.masksToBounds = YES;
}
@end
