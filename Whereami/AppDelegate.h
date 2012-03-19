//
//  AppDelegate.h
//  Whereami
//
//  Created by Richard Barrett-Small on 12/03/2012.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreLocation/CoreLocation.h>

@interface WhereamiAppDelegate : NSObject <UIApplicationDelegate, CLLocationManagerDelegate>
{
    CLLocationManager *locationManager;
}
@property (strong, nonatomic) IBOutlet UIWindow *window;

- (void)doSomethingWeird;

@end
