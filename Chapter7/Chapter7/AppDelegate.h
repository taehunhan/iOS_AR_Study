//
//  AppDelegate.h
//  Chapter7
//
//  Created by 한 태훈 on 12. 8. 12..
//  Copyright __MyCompanyName__ 2012년. All rights reserved.
//

#import <UIKit/UIKit.h>

@class RootViewController;

@interface AppDelegate : NSObject <UIApplicationDelegate> {
	UIWindow			*window;
	RootViewController	*viewController;
    
    UIView* cameraView;
}

@property (nonatomic, retain) UIWindow *window;

@end
