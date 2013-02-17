//
//  FailedBankInfo.h
//  FailedBankCD
//
//  Created by zhaozhiyuan on 13-2-7.
//  Copyright (c) 2013年 zhaozhiyuan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>
#import "FailedBankDetails.h"

@interface FailedBankInfo : NSManagedObject

@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSString * city;
@property (nonatomic, retain) NSString * state;
@property (nonatomic, retain) FailedBankDetails *details;

@end
