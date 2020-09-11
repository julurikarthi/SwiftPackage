//
//  ObjectiveClass.h
//  SampleTestApp
//
//  Created by karthik j on 03/09/20.
//  Copyright © 2020 karthik j. All rights reserved.
//



#import <Foundation/Foundation.h>


#if TARGET_OS_IPHONE
#import <UIKit/UIView.h>
@interface ObjectiveClass : UIView

#elif TARGET_OS_MAC
#import <AppKit/NSView.h>
@interface PRView : NSView
@property(nonatomic,strong) NSString *name;
#endif
// common code



@end

