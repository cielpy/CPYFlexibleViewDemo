//
//  UIView+CPYLayout.h
//  CPYFlexibleViewDemo
//
//  Created by ciel on 16/8/29.
//  Copyright © 2016年 CPY. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (CPYLayout)
- (UIView *)cpy_topToSuperview:(CGFloat)constant;
- (UIView *)cpy_leftToSuperview:(CGFloat)constant;
- (UIView *)cpy_bottomToSuperview:(CGFloat)constant;
- (UIView *)cpy_rightToSuperview:(CGFloat)constant;

- (UIView *)cpy_topToView:(UIView *)toView constant:(CGFloat)constant;
- (UIView *)cpy_leftToView:(UIView *)toView constant:(CGFloat)constant;
- (UIView *)cpy_bottomToView:(UIView *)toView constant:(CGFloat)constant;
- (UIView *)cpy_rightToView:(UIView *)toView constant:(CGFloat)constant;

- (UIView *)cpy_rightToLeftToView:(UIView *)toView constant:(CGFloat)constant;
- (UIView *)cpy_bottomToTopToView:(UIView *)toView constant:(CGFloat)constant;

- (UIView *)cpy_alignXToView:(UIView *)toView;
- (UIView *)cpy_alignYToView:(UIView *)toView;

- (UIView *)cpy_alignXToSuperview;
- (UIView *)cpy_alignYToSuperview;

- (UIView *)cpy_centerToSuperview;

- (UIView *)cpy_alignXToView:(UIView *)toView offset:(CGFloat)offset;
- (UIView *)cpy_alignYToView:(UIView *)toView offset:(CGFloat)offset;

- (UIView *)cpy_toWidth:(CGFloat)width;
- (UIView *)cpy_toHeight:(CGFloat)height;
- (UIView *)cpy_toSize:(CGSize)size;

- (UIView *)cpy_constraintEqualTo:(NSLayoutAttribute)attribute toView:(UIView *)toView toAttribute:(NSLayoutAttribute)toAttribute constant:(CGFloat)constant;
@end

@interface NSArray (cpy_layout)
- (void)cpy_flexibleWidthWithMargin:(CGFloat)margin spacing:(CGFloat)spacing;

- (void)cpy_flexibleHeightWithMargin:(CGFloat)margin spacing:(CGFloat)spacing;
@end

