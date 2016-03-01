//
// Created by David Clark on 15/01/2016.
// Copyright (c) 2016 David Clark. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface DayCell : UICollectionViewCell

@property(nonatomic, copy) NSString *text;

@property(nonatomic, strong) UIColor *backgroundColor;

@property(nonatomic, strong) UIColor *selectedBackgroundColor;

- (UICollectionViewCell *)reset;

- (void)setTextColor:(UIColor *)color;
@end
