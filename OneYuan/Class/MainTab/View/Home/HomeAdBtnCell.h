//
//  HomeAdBtnCell.h
//  OneYuan
//
//  Created by Peter Jin (https://github.com/JxbSir) on  15/2/19.
//  Copyright (c) 2015年 PeterJin.   Email:i@jxb.name      All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol HomeAdBtnCellDelegate
- (void)btnHomeClick:(int)index;
@end

@interface HomeAdBtnCell : UITableViewCell
@property(nonatomic,weak)id<HomeAdBtnCellDelegate> delegate;
@end
