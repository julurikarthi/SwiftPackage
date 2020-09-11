//
//  ObjClass.h
//  SampleTestApp
//
//  Created by karthik j on 11/09/20.
//  Copyright © 2020 karthik j. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface ObjClass : NSObject

#if TARGET_OS_OSX
-(void)testmac;
#endif

#if TARGET_OS_IOS
-(void)testIOS;
#endif

@end

NS_ASSUME_NONNULL_END
