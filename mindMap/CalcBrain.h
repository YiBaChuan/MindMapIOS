//
//  CalcBrain.h
//  mindMap
//
//  Created by Леха on 08.04.16.
//  Copyright © 2016 Леха. All rights reserved.
//
#import <Foundation/Foundation.h>

@interface CalcBrain : NSObject{
    double operand;
}

-(void) setOperand:(double)aDouble;
-(double) performOperation:(NSString *)operation;
@end