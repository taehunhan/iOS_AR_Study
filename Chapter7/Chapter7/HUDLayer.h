//
//  HUDLayer.h
//  Chapter7
//
//  Created by 한 태훈 on 12. 8. 13..
//  Copyright (c) 2012년 __MyCompanyName__. All rights reserved.
//

#import "cocos2d.h"

@interface HUDLayer : CCLayer
{
    CCLabelTTF *_counterLabel;
}

- (void)incrementCounter;
@end
