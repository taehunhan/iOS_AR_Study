//
//  HUDLayer.m
//  Chapter7
//
//  Created by 한 태훈 on 12. 8. 13..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#import "HUDLayer.h"

@implementation HUDLayer

int counter = 0;
- (id)init {
    if((self = [super init])) {
        _counterLabel = [CCLabelTTF labelWithString:[NSString stringWithFormat:@"폭발 : %d", counter] fontName:@"Marker Felt" fontSize:24];
        CGSize size = [[CCDirector sharedDirector] winSize];
        _counterLabel.position = ccp(size.width * 0.85, size.height * 0.9);
        [self addChild:_counterLabel z:10];
    }
    return self;
}

- (void)incrementCounter {
    counter++;
    _counterLabel.string = [NSString stringWithFormat:@"폭발 : %d", counter];
}
@end
