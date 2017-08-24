//
//  LYYStarView.h
//  LYYStarComment
//
//  Created by lyy on 2017/8/22.
//  Copyright © 2017年 LVY. All rights reserved.
//


#import <UIKit/UIKit.h>

typedef void(^Block)(NSString *value);

typedef NS_ENUM(NSInteger, LYYStarType) {
///整数
    LYYStarTypeInteger = 0,
///允许浮点(半颗星)
    LYYStarTypeFloat,
};

@interface LYYStarView : UIView

///回调
@property(nonatomic,copy) Block starBlock;

///星级 0-5(默认5)
@property(nonatomic,assign)CGFloat star;

///是否允许触摸改变星级   默认YES
@property(nonatomic,assign)BOOL isTouch;

///类型（整形或者浮点型）
//@property(nonatomic,assign)WTKStarType      starType;

/**
 *  构建方法
 *  @param starSize 星星大小（默认为平分，间距是大小的一半）,默认填CGSizeZero
 *  @param style    类型（LYYStarTypeInteger-不允许半颗星）LYYStarTypeInteger下，star最低为1颗星
 */
- (instancetype)initWithFrame:(CGRect)frame
                     starSize:(CGSize)starSize
                    withStyle:(LYYStarType)style;

- (void)getStarIntegral:(Block)starBlock;

@end
