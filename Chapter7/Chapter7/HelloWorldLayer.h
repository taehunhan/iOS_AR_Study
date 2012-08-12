//
//  HelloWorldLayer.h
//  Chapter7
//
//  Created by 한 태훈 on 12. 8. 12..
//  Copyright __MyCompanyName__ 2012년. All rights reserved.
//


// When you import this file, you import all the cocos2d classes
#import "cocos2d.h"
#import "HUDLayer.h"

// HelloWorldLayer
@interface HelloWorldLayer : CCLayer
{
    HUDLayer *_hud;
}

// returns a CCScene that contains the HelloWorldLayer as the only child
+(CCScene *) scene;
- (id)initWithHUD:(HUDLayer *)hud;

@end
