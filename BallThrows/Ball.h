//
//  Ball.h
//  BallThrows
//
//  Created by mettoboshi on 13/02/09.
//  Copyright 2013 mettobo. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "cocos2d.h"

@interface Ball : CCSprite {
    CGPoint velocity;
}

@property (nonatomic, assign) CGPoint velocity;


- (id)initWithPlace:(int)x placeY:(int)y velocity:(CGPoint)velocity;
- (void) update:(ccTime)delta;
@end
