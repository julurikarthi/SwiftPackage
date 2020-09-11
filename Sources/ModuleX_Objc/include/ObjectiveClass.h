//
//  ObjectiveClass.h
//  SampleTestApp
//
//  Created by karthik j on 03/09/20.
//  Copyright © 2020 karthik j. All rights reserved.
//



#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
#if TARGET_OS_OSX
@interface ObjectiveClass : NSObject
-(void)testmac;
-(void)testIOS;
@end
#endif



NS_ASSUME_NONNULL_END
