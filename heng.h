//
//  Fraction.h
//  Class
//
//  Created by mark on 2018/9/26.
//  Copyright © 2018年 mark. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface Fraction : NSObject
//{
//    int numberator;
//    int denominator;
//}
@property int numberator,denominator;
-(void)print;
//-(void)setNumberator:(int)n;
//-(void)setDenominator:(int)d;
//-(int)numberator;
//-(int)denominator;
-(double)converTonum;

@end

NS_ASSUME_NONNULL_END
