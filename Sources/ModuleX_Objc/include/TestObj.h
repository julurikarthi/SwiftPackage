//
//  TestObj.h
//  SampleTestApp
//
//  Created by karthik j on 11/09/20.
//  Copyright © 2020 karthik j. All rights reserved.
//

#import <Foundation/Foundation.h>


#if TARGET_OS_IOS
@interface TestObj : NSObject
@property(nonatomic,strong) NSString *name;
-(void)testmac;
-(void)testIOS;
@end
#endif
